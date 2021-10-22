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