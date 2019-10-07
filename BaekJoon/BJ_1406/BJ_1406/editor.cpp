#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

int main() {

	char str[600000];
	cin >> str;

	stack<char> st1, st2;
	
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		st1.push(str[i]);
	}

	int n;
	cin >> n;

	while(n--){
		char edit;
		cin >> edit;
		if (edit == 'L') {
			if (!st1.empty()) {
				st2.push(st1.top());
				st1.pop();
			}
		}
		else if (edit == 'D') {
			if (!st2.empty()) {
				st1.push(st2.top());
				st2.pop();
			}
		}
		else if (edit == 'B') {
			if (!st1.empty()) {
				st1.pop();
			}
		}

		else if (edit == 'P') {
			char a;
			cin >>  a;
			st1.push(a);
		}
	}
	while (!st1.empty()) {
		st2.push(st1.top());
		st1.pop();
	}

	while (!st2.empty()) {
		cout << st2.top();
		st2.pop();
	}

	return 0;

}