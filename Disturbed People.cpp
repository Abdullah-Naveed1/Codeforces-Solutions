#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
	int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int count=0;
    for(int i=0;i<n;i++){
        if(i+4<n && a[i]==1 && a[i+1]==0 && a[i+2]==1 && a[i+3]==0 && a[i+4]==1){
            count++;
            i+=3;
        }
        else if(i+2<n && a[i]==1 && a[i+1]==0 && a[i+2]==1){
            count++;
            i+=1;
        }
    }
    cout<<count<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
	cout.tie(NULL);
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}