#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
template <class T>

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


class base { 
	int arr[10]; 
}; 

class b1: public base { }; 

class b2: public base { }; 

class derived: public b1, public b2 {}; 

int main() 
{ 
cout << sizeof(derived); 
return 0; 
} 
