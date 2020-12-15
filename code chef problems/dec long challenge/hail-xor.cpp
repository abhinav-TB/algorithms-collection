#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
int n,x;
cin>>n>>x;
vector<int>arr(n);
for(int &a:arr){
    cin>>a;
}
int k,i;
for( i=0,k=x;i<n-1&&k!=0;k--){
   int p=log(arr[i])/log(2);
   int r=pow(2,p);
   int j;
   arr[i]^=r;
   for(j=i+1;j<n;j++){
       if(arr[j]^r<arr[j]){
           arr[j]^=r;
           break;
       }
   }
   if(j==n-1){
     arr[j]^=r;
   }
   while(arr[i]==0){
       i++;
   }
}
if(k==1||(k%2!=0&&n==2)){
   arr[-1]^=1;
   arr[-2]^=1;
}
for(int a:arr){
    cout<<a<<" ";
}
cout<<endl;

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