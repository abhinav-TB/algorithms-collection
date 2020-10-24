#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll T;
   cin>>T;
   while(T--){
       ll n;
       cin>>n;
       vector<int>arr(n);
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }
       ll count=1;
       for(ll i=1;i<n;i++){
           if(arr[i]>arr[i-1]){
               arr[i]=arr[i-1];
           }
           else{
               count++;
           }
       }
       cout<<count<<endl;

   }

}