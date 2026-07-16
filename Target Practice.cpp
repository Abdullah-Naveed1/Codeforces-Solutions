#include<iostream>
using namespace std;
void solve() {
	char s;
	int points=0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> s;
			if (s == 'X') {
				points += min(min(i, j), min(9 - i, 9 - j)) + 1;
			}
		}
	}
	cout << points << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}