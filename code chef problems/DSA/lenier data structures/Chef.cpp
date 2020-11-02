#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int people_no,price,store_no;
        int max=0;
        cin>>n;
        for(int i=0;i<n;i++){
           cin>>store_no>>people_no>>price;
           int profit=floor((people_no/(store_no+1))*price);
           if(profit>max) max=profit;
           
        }
        cout<<max<<'\n';



        
    }
    return 0;
}