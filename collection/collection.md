# 顺序容器

- vector        可变大小数组,支持快速随机访问,在飞行部之外的位置插入或删除元素可能很慢
- deque         双端队列,支持快速随机访问.在头尾位置插入/删除速度很快
- list          双向链表.只支持双向顺序访问.在list中任何位置进行插入/删除速度很快
- forward_list  单向链表.只支持单向顺序访问.在链表任何位置进行插入/删除操作速度都很快
- array         固定大小数组.支持快速随机访问.不能添加或删除元素
- string        与vector相似的容器,但是用于保存字符.随机访问快,在尾部插入/删除速度快

只有当其元素类型也定义了相应的比较运算符时,我们才可以使用关系运算符来比较两个容器.


## 顺序容器操作

### 向顺序容器中添加元素(除array外)

c.push_back(t)
c.emplace_back(args)

c.push_front(t)
c.emplace_front(t)

c.insert(p,t)
c.emplace(p,args)

c.insert(p,n,t)
c.insert(p,b,e)

c.insert(p,il)

在一个vector或string的尾部之外的任何位置,或是一个deque的首尾之外的任何位置添加元素，都需要移动元素
而且,向一个vector或string添加元素可能引起整个对象存储空间的重新分配.重新分配一个对象的存储空间需要分配新的内存,并将元素从旧的空间移动到新的空间中.
