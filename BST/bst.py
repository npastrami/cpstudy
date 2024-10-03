class TreeNode:
    def __init__(self, val=0):
        # Initialize the node value and pointers to left and right children
        self.val = val
        self.left = None
        self.right = None

# Function to insert a value in the BST
def insert(root, val):
    # If the current root is None, create a new node with the value
    if not root:
        return TreeNode(val)
    # If the value is to be inserted is less than the current node value, insert in the left subtree
    if val < root.val:
        root.left = insert(root.left, val)
    # if the value to be inserted is greater or equal, insert in the right subtree
    else:
        root.right = insert(root.right, val)
    # Return the root of the updated tree
    return root

# Example usage: create a BST and insert values
root = TreeNode(10)
insert(root, 5)
insert(root, 15)
insert(root, 2)