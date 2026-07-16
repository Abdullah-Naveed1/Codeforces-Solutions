#include<iostream>
using namespace std;
void solve() {
	int n;
	cin >> n;
	int a[n - 1],sum=0;
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
		sum += a[i];
	}
	cout << -sum << endl;
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