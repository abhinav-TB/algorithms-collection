#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll T;
    cin>>T;
    while(T--){
        ll G;
        cin>>G;
        while(G--){
            ll I=0,N=0,Q=0;
            cin>>I>>N>>Q;
            ll count;
            if(I==Q){
                count=N/2;

            }
            else{
                if(N%2==0){
                   count=N/2;
                }
                else
                {
                    count=N/2+1;
                }
                
                
            }
            cout<<count<<endl;
        }
    }
    


}