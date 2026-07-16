#include<iostream>
using namespace std;
void solve() {
	int a, b, n,count=0;
	cin >> a >> b >> n;
	while (a <= n && b<=n) {
		if (a > b)
			b += a;
		else
			a += b;
		count++;
	}
	cout << count << endl;
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