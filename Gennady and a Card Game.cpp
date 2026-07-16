#include<iostream>
#include<vector>
using namespace std;
void solve() {
	string tableCard;
	cin >> tableCard;
	vector<string>handCards(5);
	bool yes = 0;
	for (int i = 0; i < 5; i++) {
		cin >> handCards[i];
		if (handCards[i][0] == tableCard[0] || handCards[i][1] == tableCard[0] || handCards[i][0] == tableCard[1] || handCards[i][1] == tableCard[1]) {
			yes = 1;
		}
	}
	cout << (yes ? "YES" : "NO")<<endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	//cin >> t;
	while (t--) {
		solve();
	}
}