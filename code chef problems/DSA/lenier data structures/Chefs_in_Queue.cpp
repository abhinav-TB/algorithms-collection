#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
  ll n,k,p=1;
  cin>>n>>k;
  ll arr[n];
  stack<ll> s;
  for(ll i=0;i<n;i++){
      cin>>arr[i];
  }
  for(ll i=n-1;i>=0;i--){

     while(!s.empty()&& arr[i]<=arr[s.top()]){
         s.pop();
    
     }
     if(!s.empty()){
        p=(p%MOD*(s.top()-i+1)%MOD)%MOD;
     }

     s.push(i);
  }
  cout<<p<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
        solve();
    }
