#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
	int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int profit=0;
    for(int i=0;i<n;i++){
        if(a[i]<0 && m!=0){
            profit+=a[i];
            m--;
        }
    }
    cout<<-profit<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
}