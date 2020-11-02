#include<bits/stdc++.h>
#include<cmath>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll max_count=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        int max=v[0];
        for(ll i=0;i<n;i++){
            if(v[i]<max){
                max=v[i];
                max_count+=v[i];
            } 
            else{
                max_count+=max;
            }   
        }
        cout<<max_count<<endl;
    }

    return 0;
}