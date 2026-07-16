#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int arr[4][2];
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> arr[i][j];
			}
		}
		unsigned int output;
		if(arr[0][0]!=arr[1][0])
			output = abs(arr[0][0] - arr[1][0]);
		else
			output = abs(arr[0][1] - arr[1][1]);
		cout << output * output << endl;
	}
}