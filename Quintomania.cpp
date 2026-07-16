#include<iostream>
using namespace std;
void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++) {
		if (abs(a[i] - a[i + 1]) != 5 && abs(a[i] - a[i + 1]) != 7) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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