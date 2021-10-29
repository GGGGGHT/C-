// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include <map>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
map<string, string> buildMap(ifstream &map_file) {
	map<string,string> trans_map;
	string key,value;
	while (map_file >> key && getline(map_file, value)) {
		if(value.size() > 1) {
			trans_map[key] = value.substr(1);
		} else {
			throw runtime_error("no rule for " + key);
		}
	}

	return trans_map;
}

const string &transform(const string &s, const map<string, string> &m) {
	auto map_it = m.find(s);
	if (map_it != m.end()) {
		return map_it->second;
	} else {
		return s;
	}
}

void word_transform(ifstream &map_file, ifstream &input) {
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text)) {
		std::istringstream stream(text);
		string word;
		bool firstWord = true;
		while (stream >> word) {
			if(firstWord) {
				firstWord = !firstWord;
			} else {
				cout << " ";
			}

			cout << transform(word, trans_map);
		}
		cout << endl;
	}
}
int main() {
	ifstream map_file("mapfile");
	ifstream input("input");

	word_transform(map_file, input);
}