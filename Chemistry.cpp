//#include<iostream>
//using namespace std;
//void solve() {
//	int n, k, freq[26] = { 0 };
//	cin >> n >> k;
//	string s; cin >> s;
//	for (int i = 0; i < n; i++) {
//		freq[s[i] - 'a']++;
//	}
//	int oddCount = 0;
//	for (int i = 0; i < 26; i++) {
//		if (freq[i] % 2 == 1) {
//			oddCount++;
//		}
//	}
//	if (oddCount <= k+1) {
//		cout << "YES" << endl;
//	}
//	else {
//		cout << "NO" << endl;
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int t;
//	cin >> t;
//	while (t--) {
//		solve();
//	}
//}