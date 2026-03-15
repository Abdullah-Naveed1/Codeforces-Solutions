#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    char curr=' ';
    for(int i=0;i<n;i++){
        if(curr == ' '){
            curr = s[i];
            continue;
        }
        if(curr == s[i]){
            ans.push_back(s[i]);
            if(i<n-1){
                curr = s[i+1];
                i++;
            }
        }
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