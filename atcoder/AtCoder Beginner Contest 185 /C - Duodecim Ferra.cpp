
#include <bits/stdc++.h> 
using namespace std; 
  
// function to generate nCk or nChoosek 
unsigned long long nCr(unsigned long long n, 
                       unsigned long long r) 
{ 
    if (n < r) 
        return 0; 
  
    // Reduces to the form n! / n! 
    if (r == 0) 
        return 1; 
  
    unsigned long long numerator = 1; 
    for (unsigned long long i = n; i > n - r; i--) 
        numerator = (numerator * i); 
  
    unsigned long long denominator = 1; 
    for (unsigned long long i = 1; i < r + 1; i++) 
        denominator = (denominator * i); 
  
    return (numerator / denominator); 
} 
  
// Returns number of ways to cut  
// a rod of length N unsigned long longo K pieces. 
unsigned long long countWays(unsigned long long N, 
                             unsigned long long K) 
{ 
    return nCr(N - 1, K - 1); 
} 
  
// Driver code 
int main() 
{ 
    unsigned long long N ;
    unsigned long long K = 12; 
    cin>>N;
    cout << countWays(N, K); 
    return 0; 
} 