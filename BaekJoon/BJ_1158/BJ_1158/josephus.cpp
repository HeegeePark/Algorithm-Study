#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int N, K;
	int cnt = 1;
	cin >> N >> K;
	
	for (int i = 1; i < N+1; i++)
		q.push(i);
	cout << '<';
	while (!q.empty()) {

		if (cnt == K) {
			cout << q.front();
			q.pop();
			if (!q.empty())
				cout << ", ";
			cnt = 0;
		}
		else {
			q.push(q.front());
			q.pop();
		}
		cnt++;

	}
	cout << '>';

	return 0;
}