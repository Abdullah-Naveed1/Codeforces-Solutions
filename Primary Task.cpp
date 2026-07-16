#include<iostream>
#include<vector>
using namespace std;
void solve() {
	string a;
	cin >> a;
	if (a.length() < 3) {
		cout << "NO" << endl;
		return;
	}
	if (a[0] == '1' && a[1] == '0') {
		if (a[2] >= '2') {
			cout << "YES" << endl;
			return;
		}
		else if(a[2]=='1') {
			if (a.length() > 3) {
				if (a[3] >= 0) {
					cout << "YES" << endl;
					return;
				}
			}
			else {
				cout << "NO" << endl;
			}
		}
		else {
			cout << "NO" << endl;
			return;
		}
	}
	else {
		cout << "NO" << endl;
		return;
	}
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