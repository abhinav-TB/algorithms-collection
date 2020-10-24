#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factorial(ll n){
    ll count=0;
    while(n/5>=1){
       count+=n/5;

       n/=5;
    }
    return count;
}

int main(){
    
  ll T;
  cin>>T;
  while(T--){
      ll n,fact;
      cin>>n;
      fact=factorial(n);
      cout<<fact<<endl;
      
  }

}