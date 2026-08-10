#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void yes();
void no();
void solve(){
    int n,s,x;
    cin>>n>>s>>x;
    vector<int>a(n);
    int sum1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum1+=a[i];
    }
    if(sum1==s){
        yes();
        return;
    }
    else if(sum1>=s){
        no();
        return;
    }
    int sum2=0;
    int diff = s-sum1;
    if(diff%x==0){
        yes();
        return;
    }
    else{
        no();
        return;
    }
}




void yes(){
    cout<<"YES"<<endl;
}
void no(){
    cout<<"NO"<<endl;
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