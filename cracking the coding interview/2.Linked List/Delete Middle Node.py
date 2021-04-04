def delMiddleEle(mid):
    if mid = None or mid.next = None:
        return False
    mid.data = mid.next.data
    mid.next = mid.next.next.data
    return True
