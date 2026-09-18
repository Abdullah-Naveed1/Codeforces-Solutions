#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
	vector<char>stack;
    for(char c : s){
        if(c=='('){
            stack.push_back(c);
        } else{
            if(!stack.empty())
                stack.pop_back();
        }
    }
    cout<<stack.size()<<endl;
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