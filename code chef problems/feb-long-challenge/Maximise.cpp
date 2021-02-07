#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
 
 int n ;
 cin >> n;
 vector<ll> v(n);

 for(auto &a : v){
     cin>>a;
 }
 sort(v.begin(),v.end());
 ll max = v[n-1] - v[n-2] + v[n-1] - v[0] + v[n-2] - v[0];
 cout << max << endl ;

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