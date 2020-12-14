#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
ll n,m,t;
cin>>n>>m>>t;
vector<pair<int,int>>v(m);
for(int i=0;i<m;i++){
    cin>>v[i].first;
    cin>>v[i].second;
}
ll bat=n;
bat =(bat-v[0].first);
if(bat<=0){
    cout<<"No"<<endl;
    return;
}
bat+=(v[0].second-v[0].first);
bat=bat>n?n:bat;
for(int i=1;i<m;i++){
    bat=bat-(v[i].first-v[i-1].second);
    if(bat<=0){
        cout<<"No"<<endl;
        return;
    } 
    bat+=(v[i].second-v[i].first);
    bat=bat>n?n:bat;
}
bat=bat-(t-v[m-1].second);
if(bat>0){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

      solve();
    
}