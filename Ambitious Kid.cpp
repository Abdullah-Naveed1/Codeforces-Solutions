#include<iostream>
#include<cmath>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n],min=100001;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (abs(a[i]) < min) {
			min = abs(a[i]);
		}
	}
	cout << min << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t=1;
	//cin >> t;
	while (t--) {
		solve();
	}
}