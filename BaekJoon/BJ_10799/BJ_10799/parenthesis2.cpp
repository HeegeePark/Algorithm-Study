#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

	string str;
	cin >> str;
	
	int len = (int)str.length();
	stack<int> st;
	int ans = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] == '(') st.push(i);
		else {
			if (st.top() + 1 == i) {
				st.pop();
				ans += st.size();
			}	
			else {
				st.pop();
				ans += 1;
			}
		}
	}
	cout << ans << '\n';

	return 0;

}