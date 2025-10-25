//#include<iostream>
//using namespace std;
//void solve() {
//    int n;
//    cin >> n;
//    int count = 0,digCount=0,rev=0;
//    while (n) {
//        rev = rev * 10 + n % 10;
//        n /= 10;
//        digCount++;
//    }
//    count += rev % 10;
//    count += (digCount - 1) * 9;
//    cout << count << endl;
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