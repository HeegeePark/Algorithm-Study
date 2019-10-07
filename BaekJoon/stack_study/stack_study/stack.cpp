#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	stack<int> st;
	
	int N;
	string order;

	cin >> N;

	for (int i = 0; i < N; i++) {
		
		cin >> order;
		
		if (order == "push") {
			int num;
			cin >> num;
			st.push(num);
			//cout << st.top() << endl;
		}
		if (order == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}
			else
				cout << -1 << endl;
		}
		if (order == "size") {
			cout << st.size() << endl;
		}
		if (order == "empty") {
			cout << st.empty() << endl;
				
		}
		if (order == "top") {
			if (!st.empty())s
				cout << st.top() << endl;
			else
				cout << -1 << endl;
		}

	}
	return 0;
}