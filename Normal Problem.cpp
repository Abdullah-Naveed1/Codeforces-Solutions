#include<iostream>
using namespace std;
void solve() {
	string word;
	cin >> word;
	for (int i = word.size()-1; i >=0; i--) {
		if (word[i] == 'p') {
			cout << 'q';
		}
		else if (word[i] == 'q') {
			cout << 'p';
		}
		else {
			cout << 'w';
		}
	}
	cout << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}