# given a number y we have to find total pairs of A and B such that A^2 + B <Y
from math import sqrt
t=int(input())

for i in range(t):
    ans=0
    n = int(input())

    for i in range(1,min(700,n)):
       ans+=int(sqrt(n-i))
    print(ans)