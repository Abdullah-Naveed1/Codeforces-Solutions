#include<iostream>
#include<vector>
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) { 
		cin >> a[i];
	}
	int start = 0, end = n - 1;
	while (start <= end) {
		cout << a[start++]<<" ";
		if(start<end)
			cout << a[end--] << " ";
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