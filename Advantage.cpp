#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>s(n);
    int Max = INT_MIN,secondMax=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]>Max){
            secondMax = Max;
            Max = s[i];
        }
        else if(s[i]>secondMax){
            secondMax = s[i];
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]==Max){
            cout<<s[i]-secondMax<<" ";
            continue;
        }
        cout<<s[i]-Max<<" ";
    }
    cout<<endl;
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