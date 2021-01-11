t=int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    s=sorted(arr)
    
    m = s[0];
    ind = arr.index(m)
    print(ind+1)

