#include<iostream>
using namespace std;
void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if(((a+c)/2)%b==0){
		cout<<"YES"<<endl;
		return;
	}
	int diff1;
	if(b>c)
		diff1=b-c;
	else 
		diff1=c-b;
	int maxi1 = max(b,c);
	if((diff1+maxi1)%a==0){
		cout<<"YES"<<endl;
		return;
	}
	if(a>b)
		diff1=a-b;
	else 
		diff1=b-a;
	maxi1 = max(a,b);
	if((diff1+maxi1)%c==0){
		cout<<"YES"<<endl;
		return;
	}
	cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
