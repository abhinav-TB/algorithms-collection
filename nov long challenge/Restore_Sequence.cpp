#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1299720;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

vector<int> primes;

void SieveOfEratosthenes() 
{ 
    bool prime[MAX_N+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=MAX_N; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=MAX_N; i += p) 
                prime[i] = false; 
        } 
    } 
  
  
    for (int p=2; p<=MAX_N; p++) 
       if (prime[p]) 
          primes.push_back(p); 
} 

void solve() {
  ll n;
  cin>>n;
  vector<ll>B;
  for(int i=0;i<n;i++){
      ll a;
      cin>>a;
      B.push_back(a);
  }
  vector<ll>A(primes.begin(),primes.begin()+n);
  for(int i=0;i<n;i++){
     if(B[i]!=i+1){
       A[i]=A[n-1];
     }
     cout<<A[i]<<" ";
  }
  cout<<endl;
   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    SieveOfEratosthenes();
    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}