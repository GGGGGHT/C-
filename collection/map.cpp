#include <map>
#include <set>
#include <utility>
#include <iostream>
#include <unordered_map>
using namespace std;

void useMap() {
	map<string,int> word_count;

	/*
	// insert的4种方式
	// word_count.insert({"world",2});
	// word_count.insert(pair<string,int>("hello", 1));
	// word_count.insert(make_pair("ght", 1));
	// word_count.insert(map<string, int>::value_type("ggg", 5));
	*/
	// map<string,int>::value_type v1;
	// map<string,int>::key_type  v2;
	// map<string,int>::mapped_type  v3;
	// cout << v1 << endl;
	// cout << v2 << endl;
	// cout << v3 << endl;
	// auto world = word_count.find("world");
	// ++world->second;


	/*
	// insert返回值 添加单一元素的insert和emplace返回一个pair first成员是一个迭代器,指向具有给定关键字的元素,
	// second成员是一个bool值 表示是否插入成功.如果元素插入成功则为true
	auto ret = word_count.insert({"ggg",2});
	if(ret.second) {
		cout << "add success" << endl;
	} else {
		cout << "element exist" << endl;
	}*/

	// 使用下标操作 只能对非const的map进行下标操作
	// c[k] 返回关键字k的元素;如果k不存在,则添加一个关键字为k的元素 对其进行值初始化
	// c.at(k) 访问关键字为k的元素,如果k不存在则抛异常
	// 对一个map进行下标操作时,会获得一个mapped_type对象, 解引用一个map迭代器时,会得到一个value_type对象
	word_count["Anna"] = 1;
	cout << word_count["Anna"] << endl;
	++word_count["Anna"];
	cout << word_count["Anna"] << endl;
	// auto b = word_count.cbegin(), e = word_count.cend();
	// while (b != e) {
	// 	cout << b->first << " -> " << b->second << endl;
	// 	++b;
	// }



	// 访问元素
	// find查找元素是否在容器中, count会统计有多少个元素
	set<int> iset = {1, 2, 3, 4, 5, 6};
	iset.find(1); // 返回一个迭代器 指向k == 0的元素
	iset.find(0); // 返回一个迭代器 iset.end()
	iset.count(1); // 1
	iset.count(0); // 0

	// 在multimap或multiset中查找元素
	multimap<string,string> authors;
	string search_item("Alain de Botton");
	authors.insert({search_item, "hello world"});
	authors.insert({search_item, "world"});
	authors.insert({"test", "hello "});
	authors.insert({search_item, "hello ght"});
	/*auto entries = authors.count(search_item);
	auto iter = authors.find(search_item);
	while (entries--) {
		cout << (iter++)->second << endl;
	}*/

	// lower_bound upper_bound
	for(auto beg = authors.lower_bound(search_item), end = authors.upper_bound(search_item); beg != end; ++beg) {
		cout << beg->second << endl;
	}
}

void usePair() {
	// pair<string, string> p = {"key", "value"};
	// pair<string, string> p("key", "value");
	auto p = make_pair("key", "value");
	cout << p.first << " " << p.second << endl;
}

void useSet() {
	set<string>::value_type v1;
	set<string>::key_type v2;
	cout << v1 << endl;
	cout << v2 << endl;
}

// 无序容器
void useUnOrderContainer() {
	// 无序关联容器不是使用比较去处符来组织元素,而是使用一个哈希函数和关键字的==运算符
	unordered_map<string,size_t> word_count;
	string word;
	while(cin >> word) {
		++word_count[word];
	}

	for(auto w: word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times." : " time.") << endl;

	// 管理桶
	// 无序容器在存储上组织为一组桶,每个桶保存零个或多个元素.无序容器使用一个哈希函数将元素映射到桶
	// 无序容器的性能依赖哈希函数的质量和桶的数量和大小

	// =======API=======
	// c.bucket_count()  正在使用的桶的数目
	// c.max_bucket_count()  窗口能容纳的最多的桶的数量
	// c.bucket_size(n) 第n个桶中有多少个元素
	// c.bucket(k) 关键字为k的元素在哪个桶中
	// =======迭代=======
	// local_iterator 访问桶中元素的迭代器类型
	// begin() cbegin() end() cend()
	// =======哈希策略====
	// c.load_factor() 每个桶的平均元素数据
	// c.max_load_factor()
	// c.rehash(n)
	// c.reserve(n)
}

int main() {
	// usePair();
	// useSet();
	// useMap();
	useUnOrderContainer();
}