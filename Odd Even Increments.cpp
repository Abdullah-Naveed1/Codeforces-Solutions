#include<iostream>
using namespace std;
void solve() {
	int n;
	cin >> n;
	int a[n];
	unsigned int evenElement=0,oddElement=0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	evenElement = a[0]%2;
	oddElement = a[1]%2;
	for (int i = 2; i < n; i++) {
		if (i % 2 == 0) {
			if (a[i] %2!= evenElement) {
				cout << "NO" << endl;
				return;
			}
		}
		else {
			if (a[i] % 2 != oddElement) {
				cout << "NO" << endl;
				return;
			}
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