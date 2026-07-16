#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		int first = 0, second = 0;
		first += ceil((double)c / 2);
		first += a;
		second += floor((double)c / 2);
		second += b;
		if (first > second) {
			cout << "First" << endl;
		}
		else {
			cout << "Second" << endl;
		}
	}
}