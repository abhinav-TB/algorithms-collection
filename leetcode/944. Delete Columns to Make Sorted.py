class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        cnt = 0
        for  i in range(0 , len(strs[0])):
            temp = strs[0][i]
            for ele in strs:
                if ele[i] < temp :
                    cnt = cnt + 1;
                    break;
                else : temp = ele[i]
        return cnt
