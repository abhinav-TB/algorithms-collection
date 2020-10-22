#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n,new_num;
        cin>>n;
        string num=to_string(n);
        reverse(num.begin(),num.end());
        new_num=stoi(num);
        cout<<new_num<<endl;


    }

}