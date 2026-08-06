class Solution:
    def findTarget(self, root, k):
        seen = set()

        def dfs(node):
            if not node:
                return False

            # Check if complement exists
            if k - node.val in seen:
                return True

            # Store current value
            seen.add(node.val)

            # Search left or right subtree
            return dfs(node.left) or dfs(node.right)

        return dfs(root)
        