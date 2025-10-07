//#include<iostream>
//using namespace std;
//void solve() {
//	int n, x;
//	cin >> n >> x;
//	char sign;
//	int num;
//	int countDis = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> sign >> num;
//		if (sign == '+') {
//			x += num;
//		}
//		else if (sign == '-') {
//			if (x >= num)
//				x -= num;
//			else
//				countDis++;
//		}
//	}
//	cout << x << " " << countDis << endl;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	int t=1;
//	//cin >> t;
//	while (t--) {
//		solve();
//	}
//}