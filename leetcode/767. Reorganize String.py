class Solution:
    def reorganizeString(self, s: str) -> str:
        dict = Counter(s)
        
        heap = [[-j , i] for i,j in dict.items()] 
        heapq.heapify(heap)
        prev_count , prev_char  = 0 , ''  
        ans = ''
        while(heap):
            
            count , ch = heapq.heappop(heap)
            ans += ch
            if prev_count < 0:
                heapq.heappush(heap , [prev_count , prev_char])
            prev_count = count + 1 
            prev_char = ch
            
        return ans if len(ans) == len(s) else "" 
            
            
