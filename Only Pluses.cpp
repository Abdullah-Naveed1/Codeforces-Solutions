#include<iostream>
#include<algorithm>
using namespace std;
void solve() {
	int count = 5, a[3], ans;
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	while (a[0] <= a[2]&&count!=0) {
		a[0] += 1;
		count--;
		sort(a, a + 3);
	}
	cout << a[0] * a[1] * a[2] << endl;
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