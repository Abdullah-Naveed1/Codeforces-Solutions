#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool sameElements = true;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] != a[j]) {
				sameElements = false;
				break;
			}
		}
		if (sameElements == false) {
			break;
		}
	}
	sort(a, a + n,greater<int>());
	if (a[0] == a[1]) swap(a[0], a[n - 1]);
	if (sameElements == true) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
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