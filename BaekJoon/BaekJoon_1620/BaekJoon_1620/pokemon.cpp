#include <iostream>
using namespace std;

int main() {
	string* pokemonArr = new string[10000];
	int N, M;
	cin >> N >> M;

	string a;
	int num = 0;

	for (int i = 0; i < N; i++)
		cin >> pokemonArr[i];

	for (int i = 0; i < M; i++) {
		cin >> a;
		if (atoi(a.c_str()) != 0) {
			cout << pokemonArr[atoi(a.c_str()) - 1] << endl;
		}
		else {
			for (int j = 0; j < N; j++) {
				if (pokemonArr[j] == a) {
					num = j;
					cout << num + 1 << endl;
				}
			}
		}
	}

	return 0;
}