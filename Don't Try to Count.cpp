#include<iostream>
#include<string>
using namespace std;
void solve() {
	int n, m,count=0;
	cin >> n >> m;
	string x, s;
	cin >> x;
	cin >> s;
	int sentinel = 1;
	while (sentinel) {
		for (int i = 0; i < n; i++) {
			if (x.substr(i, m) == s) {
				cout << count << endl;
				sentinel = 0;
				return;
			}
		}
		if (x.length() > 25) {
			cout << "-1" << endl;
			break;
		}
		x = x + x;
		count++;
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