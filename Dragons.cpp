#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int s, n,count=0;
	cin >> s >> n;
	int a[n],b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				int temp2 = b[i];
				b[i] = b[j];
				b[j] = temp2;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (s > a[i]) {
			s += b[i];
			count++;
		}
	}
	if (count == n) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}