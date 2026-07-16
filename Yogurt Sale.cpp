#include<iostream>
using namespace std;
void solve() {
	int n, a, b,count=0;
	cin >> n >> a >> b;
	float bSingle = (float)b / 2;
	if (bSingle < a) {
		if (n % 2 == 0) {
			count += b * (n / 2);
		}
		else {
			count += b * (n - 1) / 2;
			count += a;
		}
	}
	else {
		count = a * n;
	}
	cout << count << endl;
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