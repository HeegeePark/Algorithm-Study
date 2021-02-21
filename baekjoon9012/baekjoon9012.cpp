#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n;
	stack<char> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string k;
		cin >> k;
		for (int l = 0; l < k.length(); l++) {
			if (k[l] == ('(') || st.empty()) {
				st.push(k[l]);
			}
			else if(st.top() == '('){
				st.pop();
			}
		}
		if (!st.empty()) {
			cout << "no" << endl;
		}
		else {
			cout << "yes" << endl;
		}
		while (!st.empty()) {
			st.pop();
		}
	}
}