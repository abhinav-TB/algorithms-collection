class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        d=[]
        for i, row in enumerate(mat):
            d.append([sum(row),i])
        sd = sorted(d)
        return  [sd[i][1] for i in range(k)]

     
