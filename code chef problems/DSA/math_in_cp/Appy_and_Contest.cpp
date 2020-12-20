#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
  
  ll n,a,b,k;
  cin>>n>>a>>b>>k;
  ll count=0;
  ll lcm=(a*b)/__gcd(a,b);
  count=count+(n/a)+(n/b)-2*(n/lcm);
  if(count>=k){
    cout<<"Win"<<endl;
  }
  else{
    cout<<"Lose"<<endl;
  }

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