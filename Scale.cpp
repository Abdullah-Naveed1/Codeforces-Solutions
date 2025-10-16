//#include<iostream>
//#include<vector>
//using namespace std;
//void solve() {
//	int n, k;
//	cin >> n >> k;
//	vector<vector<int>> a(n, vector<int>(n));
//	string row;
//	for (int i = 0; i < n; i++) {
//		cin >> row;
//		for (int j = 0; j < n; j++) {
//			a[i][j] = row[j] - '0';
//		}
//	}
//	for (int i = 0; i < n; i += k) {
//		for (int j = 0; j < n; j += k) {
//			cout << a[i][j]; 
//		}
//		cout << endl;
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