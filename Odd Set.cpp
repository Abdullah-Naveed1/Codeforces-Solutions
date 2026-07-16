#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,countEven=0,countOdd=0;
		cin >> n;
		int len = n * 2;
		int a[len];
		for (int i = 0; i < len; i++) {
			cin >> a[i];
			if (a[i] % 2 == 0) {
				countEven++;
			}
			else {
				countOdd++;
			}
		}
		if (countEven == countOdd) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}