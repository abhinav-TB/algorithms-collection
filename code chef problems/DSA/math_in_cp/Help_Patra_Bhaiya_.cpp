// solution can be optimised using dynamic programming

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


int calculateSum(int n) 
{ 
    if (n <= 0) 
       return 0; 
  
    int fibo[n+1]; 
    fibo[0] = 0, fibo[1] = 1; 
  
    // Initialize result 
    int sum = fibo[0] + fibo[1]; 
  
    // Add remaining terms 
    for (int i=2; i<n; i++) 
    { 
        fibo[i] = fibo[i-1]+fibo[i-2]; 
        sum += fibo[i]; 
    } 
  
    return sum; 
} 

void solve() {
  int n , k ,i , capacity;
  cin>>n>>k;
  int batch = n/k;
  int rem = n%k;
  ll total_capacity = 0;
  int fib_sum = 0;
  
  fib_sum = calculateSum(k);
  total_capacity = fib_sum*batch;

  fib_sum = calculateSum(rem);
  total_capacity += fib_sum;

  
  cout<<total_capacity % MOD<<endl;
  
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