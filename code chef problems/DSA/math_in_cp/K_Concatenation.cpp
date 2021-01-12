#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {

    int n ,k;
   
    cin>>n>>k;

    vector<int>v(n);

    for(int i = 0; i < n; i++){

       cin>>v[i];

    }

    // case 1 sum of the array is negative ans will be the sum of that array

    // case 2 sum of the array is possitive the ans wilbe the sum of the entire array k times

    // case 3 
    int max_till_now=v[0],curr_max=v[0];

    for(int i = 1; i < n; i++){

        curr_max = max(v[i],curr_max+v[i]);

        max_till_now=max(curr_max,max_till_now);
        
    }

    cout<<max_till_now*k<<endl;;


  


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