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
        ll count1=0,count2=0,ans=0;
        for(ll i=0;i<s.length();i++){
          if(s[i]=='<'){
              count1++;
              count2=0;

          }
          else if(s[i]=='>'){
              count2++;
              if(count1==count2){
                 ans=count1*2;
                 count1=count2=0;
              }
              else if(s[i+1]!='>'){
                  count1=0;
              }
          }
        }
        cout<<ans<<endl;
    }


    return 0;
}