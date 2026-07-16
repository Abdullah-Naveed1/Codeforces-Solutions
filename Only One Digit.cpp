#include<iostream>
using namespace std;
void solve() {
	int x,min=10;
	cin >> x;
	while (x!=0) {
		int dig = (x % 10);
		if (dig < min) {
			min = dig;
			
		}
		x /= 10;
	}
	cout << min << endl;
	return;
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