#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool found=false;
    int countEmpty=0;
    for(int i=0;i<n;i++){
        if(i-1>=0&&i+1<n){
            if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){
                found=true;
            }
        }
        if(s[i]=='.') countEmpty++;
    }
    if(found) cout<<2<<endl;
    else cout<<countEmpty<<endl;
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