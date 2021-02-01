#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
int b , g, k;

cin >> b >> g >> k;

vector<pair<int , int>> p(k+1) ;

for ( int i = 0 ; i < b ;i++) {

    cin >> p[i].first;
}
for ( int i = 0 ; i < g ;i++) {

    cin >> p[i].second;
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