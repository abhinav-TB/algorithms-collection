#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll LINF = 1e18;


vector<ll>Prime_count(1e6+1 , 0);

bool isprime(ll n) {

    for (ll i = 2 ; i * i < n ; i++ ) {

          if( n % i == 0 ) {

              return false ;

          }

    }
    return true;
}



void solve() {

    ll x , y ;
    cin >> x >> y;

    if(Prime_count[x] <= y) cout << "Chef" <<endl;
    else cout << "Divyam" << endl;


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    ll tc , count = 0 ; cin >> tc;

        for(ll i = 2 ; i < 1000000 + 1 ; i++) {

             if( isprime(i)) count ++;

             Prime_count[i] = count ;

        }
    for (ll t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}