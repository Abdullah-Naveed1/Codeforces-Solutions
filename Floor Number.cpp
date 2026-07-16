#include<iostream>
#include<cmath>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	if (n == 1 || n == 2) {
		cout << 1 << endl;
	}
	else {
		cout << ceil((double)(n - 2) / x) + 1 << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}