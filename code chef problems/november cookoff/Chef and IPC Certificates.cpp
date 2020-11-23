#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll LINF = 1e18;



void solve() {
  ll n,m,k,total=0;
  cin>>n>>m>>k;
  while(n--){
      ll time=0,q;
      for(ll i=0;i<k;i++){
         ll ele;
         cin>>ele;
         time+=ele;
      }
      cin>>q;
      if(time>=m&&q<=10){
          total++;
      }

  }
  cout<<total;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


        solve();

}