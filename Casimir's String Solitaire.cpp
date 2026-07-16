#include<iostream>
using namespace std;
void solve() {
	string s;
	cin >> s;
	int countAorC = 0, countB = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A' || s[i] == 'C') {
			countAorC++;
		}
		else {
			countB++;
		}
	}
	if (countAorC == countB) cout << "YES" << endl;
	else cout << "NO" << endl;
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