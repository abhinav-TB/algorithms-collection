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
    cin >> n;
    vector<int> w(n) , l(n);
    
    for(auto &a : w) {
        cin >> a;
    }

    for(auto &a :l) {
        cin >> a;
    }
    vector<int> pos(n);
    for(int i = 0 ; i < n; i++) {
        pos[i] = i ;
    }
     
    vector<int> sorted(w.begin() , w.end());

    sort(sorted.begin() , sorted.end());

    for(int i = 1 ; i <= n-1; i++) {

        int index = find(w.begin() , w.end() , sorted[i]) - w.begin();

        int p = pos[find(w.begin() , w.end() , sorted[i - 1]) - w.begin()];

        int ref = index;

        while(ref <= p) {

            ref += l[index];
            pos[index] = ref;
            ans++;

        }

    }
    cout << ans <<endl;
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