// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include <iterator>
#include <iostream>
#include  <vector>
#include <functional>

/**
 * 插入迭代器
 * - back_inserter
 * - front_inserter
 * - inserter
 * @return
 */
using namespace std;
int main() {
	vector<int> lst = {1, 2, 3, 4};
	vector<int> lst2, lst3;
	copy(lst.cbegin(), lst.cend(), front_inserter(lst2));
	copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.begin()));

	auto cb2 = lst2.cbegin(), ce2 = lst2.cend();
	while (cb2 != ce2) {
		cout << *cb2++ << endl;
	}

	cout << "=============" << endl;
	auto cb3 = lst3.cbegin(), ce3 = lst3.cend();
	while (cb3 != ce3) {
		cout << *cb3++ << endl;
	}
}