#include<iostream>
using namespace std;
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int freq[26] = { 0 };
	for (int i = 0; i < n; i++) {
		freq[s[i] - 'a']++;
	}
	int maxFreq = 0;
	for (int i = 0; i < 26; i++) {
		if (freq[i] != 0) {
			if (i > maxFreq) {
				maxFreq = i;
			}
		}
	}
	cout << maxFreq + 1 << endl;
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