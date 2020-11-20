#include<bits/stdc++.h>
#include<cmath>
#define ll long long
using namespace std;

int main(){
    vector<int>v={1,2,3,5};
    auto x=upper_bound(v.begin(),v.end(),3)-v.begin();
    cout<<x<<"test";
    return 0;
}