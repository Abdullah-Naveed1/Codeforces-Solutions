#include<iostream>
#include<vector>
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector<int>a(n);
	unsigned sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	if (sum % 3 == 0) {
		cout << 0 << endl;
		return;
	}

	int rem = sum % 3;
	if (rem == 2) {
		cout << 1 << endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (a[i] % 3 == rem) {
			cout << 1 << endl;
			return;
		}
	}

	cout << 2 << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
