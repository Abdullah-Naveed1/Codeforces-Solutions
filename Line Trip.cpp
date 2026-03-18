#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void solve(){
	int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int maxDiff=a[0];
    for(int i=0;i<n-1;i++){
        maxDiff = max(maxDiff,abs(a[i+1]-a[i]));
    }
    int lastDist=abs(x-a[n-1])*2;
    maxDiff = max(maxDiff,lastDist);
    cout<<maxDiff<<endl;
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