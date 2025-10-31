//#include<iostream>
//using namespace std;
//void solve() {
//	int n;
//	cin >> n;
//	int a[n], countNeg = 0, countPos = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		if (a[i] == -1) countNeg++;
//		if (a[i] == 1) countPos++;
//	}
//	int output = 0;
//	if (countNeg % 2 == 1) {
//		countNeg--;
//		countPos++;
//		output++;
//	}
//	if (countNeg > n / 2) {
//		output += countNeg - n / 2;
//	}
//	cout << output << endl;
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