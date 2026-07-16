#include<iostream>
#include<vector>
using namespace std;
void solve() {
	vector<string> board(8);
	for (int i = 0; i < 8; i++) {
		cin >> board[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] >= 'a' && board[i][j] <= 'z') {
				cout << board[i][j];
			}
		}
	}
	cout << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}