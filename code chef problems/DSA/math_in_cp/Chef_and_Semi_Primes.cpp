#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
   int n;
   cin>>n;
//    find the prime numbers upto n
   vector<int>primes;
   primes.push_back(2);
   for(int i=1;i<n;i++){
       if(i%2!=0){
           primes.push_back(i);
       }
   }
//    find all the possible semi primes
   set<int>s_prime;
   for(auto i=primes.begin();i<primes.end();i++){
       for(auto j=i+1;j<primes.end();j++){
           s_prime.insert(*i+*j);
       }
   }
//    check whether n can be expressed as a sum 
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