cost = 0

def revSort(arr , i):
    mini  = min(arr[i-1:len(arr)+1])
    j = arr.index(mini) + 1
    rev = arr[:i-1] + arr[i-1 : j ][::-1] + arr[j:]
    global cost
    cost = cost + (j-i+1)
    return rev

    


t = int(input())
for x in range(1 , t+1):
    l = int(input())
    arr = list(map(int, input().split()))
    for i in range(1 , l):
        arr = revSort(arr , i) 
    print('Case #{0}: {1}'.format(x , cost))
    cost = 0
