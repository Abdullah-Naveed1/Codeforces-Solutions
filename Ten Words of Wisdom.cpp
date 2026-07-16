#include<iostream>
using namespace std;
void solve() {
	int n,quality=0,max=0,count=0;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
		if (a[i] <= 10) {
			count++;
			if (b[i] > max) {
				max = b[i];
				quality = i;
			}
		}
	}
	if (count == 0) {
		cout << 0 << endl;
	}
	else
		cout << quality + 1 << endl;
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