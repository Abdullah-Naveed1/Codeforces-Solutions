#include<iostream>
using namespace std;
int main() {
	int n,count;
	cin >> n;
	if (n % 2 == 0) {
		count = n / 2;
		cout << count << endl;
		for (int i = 1; i <= count; i++) {
			cout << 2<<" ";
		}
		cout << endl;
	}
	else {
		int div = (n - 3) / 2;
		count = div + 1;
		cout << count << endl;
		for (int i = 1; i <= div; i++) {
			cout << 2 << " ";
		}
		cout << 3 << endl;
	}
	return 0;
}