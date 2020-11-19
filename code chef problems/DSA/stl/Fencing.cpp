#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
  int n,m,k,ans=0;
  int dx[4] = {0, 0, +1, +1};
  int dy[4] = {-1, +1, 0, 0};
  cin>>n>>m>>k;
  set<pair<int,int>> s;
  for(int i=0;i<k;i++){
      int a,b;
      cin>>a>>b;
      s.insert({a,b});
  }
  for(auto ele:s){
     for(int i=0;i<4;i++){
      pair<int,int>p;
      p.first=dx[i]+ele.first;
      p.second=dy[i]+ele.second;
      if(s.find(p)==s.end()){
         ans++;
      }
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