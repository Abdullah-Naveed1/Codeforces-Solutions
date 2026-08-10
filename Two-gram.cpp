#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char subStr[n-1][2];
        for(int i=0;i<n-1;i++){
                subStr[i][0]=s[i];
                subStr[i][1]=s[i+1];
        }
        
        char freq[2];
        int maxCount=0;
        for(int i=0;i<n-1;i++){
                int currentCount=0;
                for(int j=0;j<n-1;j++){
                        if(subStr[i][0]==subStr[j][0] && subStr[i][1]==subStr[j][1]){
                                currentCount++;
                        }
                }
                if(currentCount>maxCount){
                        maxCount=currentCount;
                        freq[0]=subStr[i][0];
                        freq[1]=subStr[i][1];
                }
        }
        cout<<freq[0]<<freq[1]<<endl;
}       
int main(){
        int t=1;
        //cin>>t;
        while(t--){
        solve();
        }
}
