#include<iostream>
using namespace std;
void solve() {
	long long n, k;
	cin >> n >> k;
	if (k > n) {
		cout << "NO" << endl;
		return;
	}
	if (n % 2 == 0) {
		cout << "YES" << endl;
		return;
	}
	else {
		if ((n - k)%2 == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
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