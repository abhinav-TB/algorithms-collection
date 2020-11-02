#include<bits/stdc++.h>
using namespace std;

int main(){
    int _;
    cin>>_;
    while(_--){
        int n;
        cin>>n;
        int a=0,b=0;
        string s;
        cin>>s;
        int i;
        int chancea = n,chanceb = n;
        for(i=0;i<2*n;i++){
            if(i%2 == 0){
                if(s[i] == '1'){
                    a++;
                }
            }
            else if(i%2 != 0){
                if(s[i] == '1'){
                    b++;
                }
            }
            if(i%2 == 0){
                chancea--;
            }
            else{
                chanceb--;
            }
            if(a > chanceb + b){
                cout<<i+1<<endl;
                break;
            }
            if(b > chancea + a){
                cout<<i+1<<endl;
                break;
            }
            if(a == b && i==2*n-1){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
