#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    vector<int>a(7);
    int Max=INT_MIN;
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    for(int i=0;i<7;i++){
        if(a[i]>Max){
            Max = a[i];
        }
    }
    int sum = 0;
    bool once=true;
    for(int i=0;i<7;i++){
        if(a[i]==Max && once){
            sum+=a[i];
            once = false;
        }
        else{
            sum-=a[i];
        }
    }
    cout<<sum<<endl;
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