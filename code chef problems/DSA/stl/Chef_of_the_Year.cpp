#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
   int n,m;
   pair<string,int>max1,max2;
   cin>>n>>m;
   map<string,int>countries;        
   map<string,int>persons;
   max1.second=0;
   max2.second=0;
   for(int i=0;i<n;i++){
       string per,country;
       cin>>per>>country;
       countries[country]++;
       if(countries[country]>max1.second){
           max1.first=country;
           max1.second=countries[country];
       }
       if(countries[country]==max1.second){
           max1.first=min(country,max1.first);
       }
       

   }
   for(int i=0;i<m;i++){
       string per;
       cin>>per;
       persons[per]++;
      if(persons[per]>max2.second){
           max2.first=per;
           max2.second=persons[per];
       }
      if(persons[per]==max2.second){
           max2.first=min(per,max2.first);
       }

   }
   cout<<max1.first<<endl;
   cout<<max2.first<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

   
        solve();
    }
