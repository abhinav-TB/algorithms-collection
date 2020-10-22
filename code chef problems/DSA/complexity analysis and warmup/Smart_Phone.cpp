#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin>>N;
    if(N==0){
      cout<<0<<endl;
      exit(0);
    }
    vector<ll> arr;
    vector<ll> max_rev;
    while(N--){
      int a;
      cin>>a;
      arr.push_back(a);

    }

    sort(arr.begin(),arr.end());
    int flag=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
          max_rev.push_back(arr[i]*((arr.size())-flag));
        }
        else{
          max_rev.push_back(arr[i]*((arr.size())-i));
          flag==i;
        }
        
    }

    int ans=*max_element(max_rev.begin(),max_rev.end());
    cout<<ans<<endl;

}