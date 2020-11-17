#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
   int n,m;
   cin>>n>>m;
   vector<pair<int,int>>A(n),B(m);
   
   for(int i=0;i<n;i++){
       int a;
       cin>>a;
       A[i]={a,i};
   }
   for(int i=0;i<m;i++){
       int a;
       cin>>a;
       B[i]={a,i};
   }
   sort(A.begin(),A.end());
   sort(B.begin(),B.end());
   int cnt=0;
   for(int i=0;i<m;i++){
      cout<<B[i].second<<" "<<A[0].second<<endl;
   }
   for(int i=1;i<n;i++){
      cout<<A[i].second<<" "<<B[m-1].second<<endl;
   }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
        solve();
    }
