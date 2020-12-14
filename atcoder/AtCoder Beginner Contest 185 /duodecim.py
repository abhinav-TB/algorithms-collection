
def nCr(n, r): 
  
    if (n < r): 
        return 0
  
    # reduces to the form n! / n! 
    if (r == 0): 
        return 1
 
    numerator = 1
    for i in range(n, n - r, -1): 
        numerator = numerator * i 
  
    denominator = 1
    for i in range(1, r + 1): 
        denominator = denominator * i 
  
    return (numerator // denominator) 
  
# Returns number of ways to cut  
# a rod of length N into K peices. 
def countWays(N, K) : 
    return nCr(N - 1, K - 1); 
  
# Driver code 
N = int(input())
K = 12

print(countWays(N, K)) 