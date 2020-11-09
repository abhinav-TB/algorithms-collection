#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ve vector

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    ll n,max_depth=0,max_depth_index=0,max_sequence=0,max_sequence_index=-1;
    ve<ll> v;
    ve<ll>seq_end;
    seq_end.push_back(0);
    stack<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
         int a;
         cin>>a;
         v.push_back(a);
         
    }
    for(int i=0;i<n;i++){
         if(v[i]==1){
             s.push(1);
         }

         if(v[i]==2&&!s.empty()){
             s.pop();
         }
         if(s.empty()){
             seq_end.push_back(i+1);
         }
         if(max_depth<s.size()){
             max_depth=s.size();
             max_depth_index=i+1;
         }
    }
    for(int i=1;i<seq_end.size();i++){
        ll diff=seq_end[i]-seq_end[i-1];
        if(diff>max_sequence){
           max_sequence=diff;
           max_sequence_index=seq_end[i-1]+1;
        }

    }
    cout<<max_depth<<" "<<max_depth_index<<" "<<max_sequence<<" "<<max_sequence_index<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

  
        solve();
    
}