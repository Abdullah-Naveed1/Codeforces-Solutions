//#include<iostream>
//using namespace std;
//void solve() {
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    int indexFirst, indexLast, found1 = 0, foundL = 0;
//    for (int i = 0; i < n; i++) {
//        if (s[i] == 'B' && found1 == 0) {
//            indexFirst = i;
//            found1 = 1;
//        }
//        if (s[n - 1 - i] == 'B' && foundL == 0) {
//            indexLast = n - 1 - i;
//            foundL = 1;
//        }
//    }
//    cout << (indexLast - indexFirst + 1) << endl;
//}
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//}