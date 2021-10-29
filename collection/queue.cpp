// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include <queue>
#include <iostream>

using namespace std;

// ==========
// queue API
// queue.pop()
// queue.front()
// queue.back()
// queue.top()
// queue.push(item)
// queue.emplace(args)
// ==========
int main() {
	queue<int> intQueue;

	for (size_t ix = 0; ix != 10; ++ix) {
		intQueue.push(ix);
	}

	while (!intQueue.empty()) {
		auto top = intQueue.front();
		cout << "top: " << top << endl;
		intQueue.pop();
	}
}