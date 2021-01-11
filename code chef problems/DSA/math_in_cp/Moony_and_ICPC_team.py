t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    ma=0
    for i in range(n-2):
        if(sum(a[i:i+3]) > ma ):
            ma=sum(a[i:i+3])
    h=a[0]+a[1]+a[-1]
    b=a[-2]+a[-1]+a[0]
    print(max(ma,h,b))  


    
    