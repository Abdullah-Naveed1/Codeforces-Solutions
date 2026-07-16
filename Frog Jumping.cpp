#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
void solve(){
    ll a,b,k;
    cin>>a>>b>>k;
    ll final=0;

    if(k%2==1){
        final+=a*(k/2+1);
        final-=b*(k/2);
    }
    else{
        final+=a*(k/2);
        final-=b*(k/2);
    }

    cout<<final<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}