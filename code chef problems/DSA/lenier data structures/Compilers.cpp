#include<bits/stdc++.h>
#include<cmath>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll count=0,ans=0;
        
        for(ll i=0;i<s.length();i++){
             if(s[i]=='>'){
                 count--;
             }
             else{
                 count++;
             }
             if(count==0){
                 ans=max(i+1,ans);
             }
             if(count<0){
                 break;
             }
        }
        cout<<ans<<endl;
    }


    return 0;
}