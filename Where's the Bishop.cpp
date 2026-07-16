#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		char s[8][8];
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> s[i][j];
			}
		}
		int outputRow, outputCol,sentinel=1;
		for (int row = 0; row < 8; row++) {
			for (int col = 0; col < 8; col++) {
				if (s[row][col] == '#') {
					if (s[row][col + 2] == '#') {
						outputRow = row + 1;
						outputCol = col + 1;
						sentinel = 0;
						break;
					}
					else {
						break;
					}
				}
			}
			if (sentinel == 0)
				break;
		}
		cout << outputRow+1 << " " << outputCol+1 << endl;
	}
}