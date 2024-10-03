// Class representing a node in the BST
class TreeNode {
    int val;
    TreeNode left, right;

    // Constructor to initialize the node value and left and right pointers
    TreeNode(int val) {
        this.val = val;
        left = right = null;
    }
}

// Class representing the Binary Search Tree itself
class BST {
    TreeNode root;

    // Constructor for the BST
    public BST() {
        root = null;
    }

    // Method to insert a value in the BST
    public void insert(int val) {
        root = insertRec(root, val);
    }

    // Helper method for recursive insertion
    private TreeNode insertRec(TreeNode root, int val) {
        // If the current root is null, create a new node with the value
        if (root == null) {
            return new TreeNode(val);
        }
        // If the value to be inserted is less than the current node value, insert in the left subtree
        if (val < root.val) {
            root.left = insertRec(root.left, val);
        }
        // If the value to be inserted is greater or equal, insert in the right subtree
        else {
            root.right = insertRec(root.right, val);
        }
        // Return the root of the updated tree
        return root;
    }

    // Method to do inorder traversal of the BST
    public void inorderTraversal() {
        inorderRec(root);
    }

    // Helper method for recursive inorder traversal
    private void inorderRec(TreeNode root) {
        if (root != null) {
            inorderRec(root.left);
            System.out.print(root.val + " ");
            inorderRec(root.right);
        }
    }

    public static void main(String[] args) {
        // Create an instance of the BST
        BST tree = new BST();
        // Insert values into the BST
        tree.insert(10);
        tree.insert(5);
        tree.insert(15);
        tree.insert(2);

        // Print the inorder traversal of the BST (should print: 2 5 10 15)
        tree.inorderTraversal();
    }
}
