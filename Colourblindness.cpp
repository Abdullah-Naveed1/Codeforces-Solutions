#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		char s[2][n];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				cin >> s[i][j];
			}
		}
		bool ans = true;
		for (int i = 0; i < n; i++) {
			if (s[0][i] == s[1][i] || (s[0][i] == 'G' && s[1][i] == 'B') || (s[0][i] == 'B' && s[1][i] == 'G')) {
				continue;
			}
			else {
				ans = false;
			}
		}
		if (ans == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}