#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
  string s;
  cin>>s;
  int count1 =0,count2=0;
  for(char a:s){
      if(a=='1')count1++;
      else count2++;
  }
  if(count1<1||count2<1||s.size()%2!=0){
      cout<<"-1"<<endl;
  }
  else{
      int ans=abs(count1-count2)/2;
       cout<<ans<<endl;
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