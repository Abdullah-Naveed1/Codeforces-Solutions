//#include<iostream>
//using namespace std;
//void solve() {
//	int n;
//	cin >> n;
//	int a[n],count1st=0;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		if(a[i]==2)
//			count1st++;
//	}
//	if (count1st % 2 == 1) {
//		cout << "-1" << endl;
//		return;
//	}
//	int count2nd=0;
//	for (int i = 0; i < n; i++) {
//		if (a[i] == 2) {
//			count2nd++;
//		}
//		if (count2nd == count1st / 2) {
//			cout << i + 1 << endl;
//			return;
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