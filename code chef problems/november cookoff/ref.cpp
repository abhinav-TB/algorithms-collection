#include <bits/stdc++.h>
using namespace std;
void DFS(vector<vector<int>>graph, int v, vector<bool> &discovered)
{
    
    discovered[v] = true;
 
 
    // do for every edge (v -> u)
    for (int u : graph[v])
    {
        // u is not discovered
        if (!discovered[u])
            DFS(graph, u, discovered);
    }
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   vector<vector<int>> g( n , vector<int> (n, 0)); 
	   for(int i=0;i<n;i++){
	       for(int j=0;j<n;j++){
	           int node;
	           cin>>node;
	           g[i].push_back(node);
	       }
	   }
	   vector<bool>discovered(n,false);
	   for (int i = 0; i < n; i++)
        if (discovered[i] == false)
            DFS(g, i, discovered);
	   auto it = find(g.begin(),g.end(),0);
	   if(it!=g.end()){
	       cout<<1<<endl;
	   }
	   else{
	       cout<<0<<endl;
	   }
	}
	return 0;
}