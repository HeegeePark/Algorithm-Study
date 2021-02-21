#include <iostream>
#include <queue>
using namespace std;
//
//void push(int *q, int i, int x) {
//	if (i == 0) 
//		if (q[i] < 0)
//			q[i] = x;
//	
//	for (int j = 0; j < i+1; j++)
//	{
//		if (q[j] < 0) {
//			q[j] = x;
//			break;
//		}
//	}
//}
//void pop(int* q, int i) {
//	if (q[0] < 0)
//		cout << -1 << '\n';
//	else {
//		cout << q[0] << '\n';
//		for (int j = 0; j < i; j++)
//		{
//			q[j] = q[j + 1];
//		}
//	}
//}
//int size(int* q, int i) {
//	int size = 0;
//	for (int j = 0; j < i; j++)
//	{
//		if (q[j] > 0)
//			size++;
//		else break;
//	}
//	return size;
//}
//void empty(int *q) {
//	if (q[0] < 0)
//		cout << 1 << '\n';
//	else cout << 0 << '\n';
//}
//void front(int *q) {
//	if (q[0] < 0)
//		cout << -1 << '\n';
//	else cout << q[0] << '\n';
//}
//void back(int *q, int size) {
//	if (q[0] < 0)
//		cout << -1 << '\n';
//	else cout << q[size-1] << '\n';
//}
int main() {
	//int* q = (int*)malloc(10000);
	queue<int> q;
	int N;
	string s;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (s == "pop") {
			if (q.empty()) cout << -1 << '\n';
			else{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (s == "size")
			cout << q.size() << '\n';
		else if (s == "empty")
			cout << q.empty() << '\n';
		else if (s == "front")
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		else if (s == "back")
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		else break;
	}
	//free(q);
	return 0;
}