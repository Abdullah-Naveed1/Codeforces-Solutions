#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool numberIsExcept1and4(int);
void Yes();
void No();
void solve(){
    int n;
    cin>>n;
    string s = to_string(n);
    if(numberIsExcept1and4(n)){
		No();
		return;
	}
	for(int i=0;i<s.size();i++){
		if(i<s.size()-2&&s[i]=='4'&&s[i+1]=='4'&&s[i+2]=='4'){
			No();
			return;
		}
		else if(i==0 && s[i]=='4'){
			No();
			return;
		}
	}
	Yes();
}

void Yes(){
	cout<<"YES"<<endl;
}

void No(){
	cout<<"NO"<<endl;
}

bool numberIsExcept1and4(int n){
	bool check=false;
	while(n!=0){
		int dig=n%10;
		n/=10;
		if(dig==1||dig==4) continue;
		else check=true;
	}
	return check;
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