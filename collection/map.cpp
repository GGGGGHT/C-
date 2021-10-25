#include <map>
#include <set>
#include <utility>
#include <iostream>

using namespace std;

void useMap() {
	map<string,int>::value_type v1;
	map<string,int>::key_type  v2;
	map<string,int>::mapped_type  v3;
	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;
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
	useSet();
}