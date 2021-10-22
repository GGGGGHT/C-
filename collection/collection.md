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

capacity是指在不分配新的内存空间的前提下它最多可以保存多少元素
容器的 size 是指它已经保存的元素的数目


### string API
s.insert(pos,args) 在pos之前插入args指定的字符  pos 可以是一个下标或一个迭代器<br/>
s.erase(pos,len) 删除从位置 pos 开始的 len 个字符 <br/>
s.assign(args) 将 s 中的字符替换为 args 所指定的字符 <br/>
s.append(args) 追加到 s 之后<br/>
s.replace(range,args) 删除 s 中范围 range 内的字符  替换为 args 指定的字符 <br/>


s.find(args) 查找 s 中 args 第一次出现的位置<br/>
s.rfind(args) 查询 s 中 args 最后一次出现的位置<br/>
s.find_first_of(args) 在 s 中查找 args 中任何一个字符第一次出现的位置<br/>
s.find_last_of(args) 在 s 中查找 args 中任何一个字符最后一次出现的位置<br/>
s.find_fist_not_of(args) 在 s 中查找第一个不在 args 中的字符 <br/>
s.find_last_not_of(args) 在 s 中查找最后一个不在 args 中的字符 

to_string(val) 返回数值 val 的string 表示<br/>
int -> stoi(s,p,b)   返回 s 的起始子串的数值 p 是 size_t指针,用来保存 s 中第一个非数值字符的下标,p 默认为0,b 表示转换所用的基数 默认为10
long -> stol(s,p,b) 
unsigned long -> stoul(s,p,b) 
long long -> stoll(s,p,b) 

float -> stof(s,p) 
double -> stod(s,p) 
long double -> stold(s,p) 