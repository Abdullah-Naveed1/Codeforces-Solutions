#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void solve() {
	int a,b,c, Max = 0;
	cin >> a >> b >> c;
	Max = max({ a, b, c });
	if (a > b && a > c) {
		cout << 0 << " ";
	}
	else {
		cout << Max - a + 1<<" ";
	}
	if (b > a && b > c) {
		cout << 0 << " ";
	}
	else {
		cout << Max - b + 1 << " ";
	}
	if (c > b && c > a) {
		cout << 0 << " ";
	}
	else {
		cout << Max - c + 1 << " ";
	}
	cout << endl;
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