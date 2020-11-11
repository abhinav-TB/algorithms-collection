
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
long n,k,i;
cin>>n>>k;
long a[n];
for(i=0;i<n;i++)
cin>>a[i];
long ff=1;
stack<int> st;
st.push(n-1);
for(i=n-2;i>=0;i--)
{
while(!st.empty() && a[i]<=a[st.top()])
st.pop();
if(!st.empty())
{
int i2=st.top();
int i1=i;
ff=((ff%mod)*((i2%mod)-(i1%mod)+1))%mod;
}
st.push(i);
}
cout<<ff<<endl;
}