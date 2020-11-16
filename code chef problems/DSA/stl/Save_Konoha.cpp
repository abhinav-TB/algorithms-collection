#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
   int n,z,sum=0,flag=1;
   cin>>n>>z;
   int arr[n];
   priority_queue<int> pq;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       pq.push(arr[i]);
   }
   int i=0;

   while(z>0){
    
      int max=pq.top(); 
      if(max==0){
          flag=0;
          break;
      }
      z-=max;
      pq.pop();
      pq.push(max/2);
      i++;
   }
   if(flag==1){
       cout<<i<<endl;
   }
   else{
       cout<<"Evacuate"<<endl;
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