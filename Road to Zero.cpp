#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long

ll min(ll a,ll b, ll c, ll d){
    if(a<b&&a<c&&a<d){
        return a;
    }
    else if(b<c&&b<d){
        return b;
    }
    else if(c<d){
        return c;
    }
    else{
        return d;
    }
}

void solve(){
	int x,y;
    cin>>x;
    cin>>y;
    int a,b;
    cin>>a;
    cin>>b;
    ll diff = abs(x-y);
    ll smaller = min(x,y);
    ll bigger = max(x,y);
    ll amount1 = diff*a+smaller*b;
    ll amount2 = diff*b + smaller*a;
    ll amount3 = diff*a + bigger*b;
    ll amount4 = diff*b + bigger*a;
    ll minimum = min(amount1,amount2,amount3,amount4);
    cout<<minimum<<endl;
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