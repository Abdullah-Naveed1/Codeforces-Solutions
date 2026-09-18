#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

string strApartFromThisSubset(string s, string orig){
    //Note: this function is not generic
    //meaning this assumes the subset is at the starting of the string
    int n = s.size();
    int index=0;
    string resultant;
    for(int i=0;i<orig.size();i++){
        if(index<n && orig[i]==s[index++]){
            continue;
        }
        resultant.push_back(orig[i]);
    }
    return resultant;
}

void solve(){
	int n;
    cin>>n;
    string s[n];
    unordered_map<string, int> map;
    for(int i=0;i<n;i++){
        cin>>s[i];
        map[s[i]] = i;
    }
    for(int i=0;i<n;i++){
        string temp = "";
        bool found=false;
        for(int j=0;j<s[i].size();j++){
            temp.push_back(s[i][j]);
            if(map.find(temp)!=map.end()){
                if(map.find(strApartFromThisSubset(temp, s[i]))!=map.end()){
                    found=true;
                }
            }
        }
        cout<<found;
    }
    cout<<endl;
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