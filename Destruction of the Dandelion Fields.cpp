//#include<iostream>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n,countOdd=0;
//		cin >> n;
//		long long a[n];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//			if (a[i] % 2 == 1)
//				countOdd++;
//		}
//		if (countOdd == 0) {
//			cout << countOdd << endl;
//			continue;
//		}
//		int oddToAdd = ceil((double)countOdd / 2);
//		long long sum = 0;
//		sort(a,a+n);
//		for (int i = n-1; i >= 0; i--) {
//			if (oddToAdd != 0 && a[i] % 2 == 1) {
//				sum += a[i];
//				oddToAdd--;
//			}
//			else if (a[i] % 2 == 0) {
//				sum += a[i];
//			}
//		}
//		cout << sum << endl;
//	}
//}