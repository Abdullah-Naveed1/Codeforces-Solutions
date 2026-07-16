#include<iostream>
using namespace std;
void solve() {
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	int count[7] = { 0 };
	for (int i = 0; i < n; i++) {
		count[s[i] - 'A']++;
	}
	int finalCount = 0;
	for (int i = 0; i < 7; i++) {
		if (count[i] < m) {
			finalCount += m - count[i];
		}
	}
	cout << finalCount << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}