//#include<iostream>
//using namespace std;
//void solve() {
//	int a, b, ans = 0;
//	cin >> a >> b;
//	if (b == a) {
//		cout << 0 << endl;
//		return;
//	}
//	else if (a > b) {
//		if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
//			cout << 2 << endl;
//		else
//			cout << 1 << endl;
//	}
//	else {
//		if ((b - a) %2== 1) {
//			cout << 1 << endl;
//		}
//		else {
//			cout << 2<< endl;
//		}
//	}
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