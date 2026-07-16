#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		char s[3][3];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> s[i][j];
			}
		}
		char ans;
		int A, B, C;
		for (int i = 0; i < 3; i++) {
			A=0, B=0, C=0;
			for (int j = 0; j < 3; j++) {
				if (s[i][j] == 'A') {
					A++;
				}
				else if (s[i][j] == 'B') {
					B++;
				}
				else if (s[i][j] == 'C') {
					C++;
				}
			}
			if (A == 0) {
				ans = 'A';
			}
			else if (B == 0) {
				ans = 'B';
			}
			else if(C==0){
				ans = 'C';
			}
		}
		cout << ans << endl;
	}
}