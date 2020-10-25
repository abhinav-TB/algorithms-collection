
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll T;
    cin>>T;
    while(T--){
        ll N,d1,d2;
        cin>>N>>d1>>d2;
        ll S=d2+d1;
        ll segment[]={(2*S)%10,(4*S)%10,(8*S)%10,(6*S)%10};
        ll segment_sum=0;
        for (ll i = 0; i < 4; i++)
        {
            segment_sum+=segment[i];
        }
        
        ll cycle_sum=0;
        if(N>3){
             ll rem =(N-3)%4;
             cycle_sum=S+(S%10)+(((N-3)/4)*segment_sum);
             for(int i=0;i<rem;i++){
                cycle_sum+=segment[i];
             }

        }
        
        else{
            if(N==2){
            cycle_sum=S;
             }
            else if(N==2){
               cycle_sum=S+(S%10);
            }
        }

        if(cycle_sum%3==0){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }

    }


}