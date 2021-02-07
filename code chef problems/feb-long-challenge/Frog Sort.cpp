#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    
    int n , ans = 0 ;
    vector<int> w(n) , l(n);
    
    for(auto &a : w) {
        cin >> a;
    }

    for(auto &a :l) {
        cin >> a;
    }

    if( n == 2) {
        
       if(w[0] > w[1]) {
           if(l[0] == 1) {
               ans +=2;
           }
       }
    } 

    else if ( n == 3) {
        if( w[0] > w[1]) {
            if(w[0] > w[2]) {
                ans += l[1]+2;
            }
        }
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