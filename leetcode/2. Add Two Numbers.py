# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head1 , head2= l1 , l2
        carry = 0
        dum_head = ListNode(0)
        result = dum_head;
        while(head1 or head2):
            a = head1.val if head1 else 0
            b = head2.val if head2 else 0
            
            sum = a + b + carry
            
            result.next = ListNode(sum % 10)
            result = result.next
            carry = sum // 10;
            head1 = head1.next if head1 else None
            head2 = head2.next if head2 else None
        if carry > 0 :
            result.next = ListNode(carry)
            
        return dum_head.next
            
