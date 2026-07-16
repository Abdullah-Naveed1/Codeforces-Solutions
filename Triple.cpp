#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int output=-1;
		for (int i = 0; i < n; i++) {
			if ((i + 1 < n && i + 2 < n) && a[i] == a[i + 1] && a[i + 1] == a[i + 2]) {
				output = a[i];
				break;
			}
		}
		cout << output << endl;
	}
}