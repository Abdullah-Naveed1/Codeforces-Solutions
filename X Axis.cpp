#include<iostream>
#include<cmath>
using namespace std;
void solve() {
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	cout << (abs(x1 - x2) + abs(x1 - x3) + abs(x2 - x3))/2<<endl;
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