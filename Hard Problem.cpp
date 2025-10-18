//#include<iostream>
//using namespace std;
//void solve() {
//	int m, a, b, c;
//	cin >> m >> a >> b >> c;
//	int totalSeats = 2 * m;
//	int totalSeatsCopy = totalSeats;
//	if (m >= a) {
//		totalSeats -= a;
//	}
//	else {
//		totalSeats -= m;
//	}
//	if (m >= b) {
//		totalSeats -= b;
//	}
//	else {
//		totalSeats -= m;
//	}
//	if (totalSeats >= c) {
//		totalSeats -= c;
//	}
//	else {
//		totalSeats -= totalSeats;
//	}
//	cout << totalSeatsCopy - totalSeats << endl;
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