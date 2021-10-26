#include <map>
#include <set>
#include <utility>
#include <iostream>

using namespace std;

void useMap() {
	map<string,int> word_count;
	word_count.insert({"world",2});
	word_count.insert(pair<string,int>("hello", 1));
	word_count.insert(make_pair("ght", 1));
	word_count.insert(map<string, int>::value_type("ggg", 5));
	// word_count.insert();
	// map<string,int>::value_type v1;
	// map<string,int>::key_type  v2;
	// map<string,int>::mapped_type  v3;
	// cout << v1 << endl;
	// cout << v2 << endl;
	// cout << v3 << endl;
	// auto world = word_count.find("world");
	// ++world->second;
	auto b = word_count.cbegin(), e = word_count.cend();
	while (b != e) {
		cout << b->first << " -> " << b->second << endl;
		++b;
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

int main() {
	// usePair();
	// useSet();
	useMap();
}