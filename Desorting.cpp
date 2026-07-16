#include<iostream>
using namespace std;
bool notSorted(int a[], int size) {
	for (int i = 0; i < size-1; i++) {
		if (a[i] > a[i + 1])
			return true;
	}
	return false;
}
void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (notSorted(a, n)) { cout << 0 << endl; return; }
	int smallestDiff = INT_MAX;
	for (int i = 0; i < n - 1; i++) {
		if (abs(a[i] - a[i + 1]) < smallestDiff)
			smallestDiff = abs(a[i] - a[i + 1]);
	}
	cout << smallestDiff / 2+1<<endl;
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