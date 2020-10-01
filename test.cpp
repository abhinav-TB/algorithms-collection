#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s ="asaaaaaag";
  sort(s.begin(), s.end()); 
  auto it =unique(s.begin(),s.end());
  s.resize(distance(s.begin(),it));
  cout<<s;
}