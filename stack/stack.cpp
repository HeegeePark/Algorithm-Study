#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<int> stack;
	int n;
	string k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k == "push") {
			int num;
			cin >> num;
			stack.push(num);
		}
		else if (k == "pop") {
			if (!stack.empty()) {
				cout << stack.top() << endl;
				stack.pop();
				
			}
			else {
				cout << (-1) << endl;
			}
		}
		else if (k == "empty") {
			if (!stack.empty()) {
				cout << (0) << endl;
			}
			else {
				cout << (1) << endl;
			}
		}
		else if (k == "top") {
			if (!stack.empty()) {
				cout << stack.top() << endl;
			}
			else {
				cout << (-1) << endl;
			}
		}
		else {
			cout << stack.size() << endl;
		}
	}
	return 0;
}