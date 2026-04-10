#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int x;
    cin>>x;
    int ans = x+1;
    if(ans>67){
        cout<<67<<endl;
        return;
    }
    cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}