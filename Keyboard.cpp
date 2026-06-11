#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

char leftShift(char);
char rightShift(char);

void solve(){
	char shift;
    cin>>shift;
    string message;
    cin>>message;
    for(int i=0;i<message.size();i++){
        if(shift=='R'){
            char correct = leftShift(message[i]);
            cout<<correct;
        } else if(shift=='L'){
            char correct = rightShift(message[i]);
            cout<<correct;
        }
    }
}

char leftShift(char ch){
    string seq;
    seq = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0;i<seq.size();i++){
        if(seq[i]==ch){
            return seq[i-1];
        }
    }
    return 'a';
}

char rightShift(char ch){
    string seq;
    seq = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0;i<seq.size();i++){
        if(seq[i]==ch){
            return seq[i+1];
        }
    }
    return 'a';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}