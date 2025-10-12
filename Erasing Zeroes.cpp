//#include<iostream>
//using namespace std;
//void solve() {
//	string s;
//	cin >> s;
//	unsigned len = s.length(),count=0,totalCount=0;
//	for (int i = 0; i < len; i++) {
//		count = 0;
//		if (s[i] == '1') {
//			for (int j = i + 1; j < len; j++) {
//				if (s[j] == '0') {
//					count++;
//				}
//				else if (s[j] == '1') {
//					totalCount += count;
//					break;
//				}
//			}
//		}
//	}
//	cout << totalCount << endl;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	int t;
//	cin >> t;
//	while (t--) {
//		solve();
//	}
//}