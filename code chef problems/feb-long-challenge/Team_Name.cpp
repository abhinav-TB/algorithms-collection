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
    map<string , vector<char> > m ;
    string s;
    for(int i = 0 ; i < n ;i++ ) {

        cin >> s;
        if(s.length() != 0) {
            
            m[s.substr(1)].push_back(s[0]);

        }
    }
    for(auto i : m) {

        for (auto j : m) {

            if(i.first != j.first) {
                
                ll temp = 0 ;
                set<char> s(j.second.begin() , j.second.end());
                for(auto k : i.second) {

                    if(s.find(k) != s.end()) temp++ ;
                }
                ans += (j.second.size()-temp) * (i.second.size()-temp) ; 
            }
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