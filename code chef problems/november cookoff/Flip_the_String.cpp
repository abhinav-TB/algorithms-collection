#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
   string a,b,a0,b0,a1,b1;
   int ans=0;
   cin>>a>>b;
   for(int i=0;i<a.length();i+=2){
       if(a[i]!=b[i]){
           while(a[i]!=b[i]&&i<a.length()){
              i+=2;
           }
           ans++;
       }
   }
   for(int i=1;i<a.length();i+=2){
       if(a[i]!=b[i]){
           while(a[i]!=b[i]&&i<a.length()){
              i+=2;
           }
           ans++;
       }
   }
   cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}