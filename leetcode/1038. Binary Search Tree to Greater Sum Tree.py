# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def bstToGst(self, root: TreeNode) -> TreeNode:
        arr = [] 
        def inorder(node):
            if node == None:
                return
            inorder(node.left)
            arr.append(node.val)
            inorder(node.right)
            
        def update_tree(node ):
            if node == None:
                return
            
            update_tree(node.left)
            i = arr.index(node.val)
            node.val = sum(arr[i:])
            update_tree(node.right)
            
        inorder(root)
        update_tree(root)
        return root
             
             
        
            
