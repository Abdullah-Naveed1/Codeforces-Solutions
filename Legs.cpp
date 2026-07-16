#include<iostream>
using namespace std;

int minAnimals(int n) {
	int count = 0;
	while (n >= 4) {
		n -= 4;
		count++;
	}
	if (n == 2)
		count++;
	return count;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << minAnimals(n) << endl;
	}
}