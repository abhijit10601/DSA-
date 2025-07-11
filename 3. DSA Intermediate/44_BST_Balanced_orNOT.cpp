/*
Problem Description
Implement a function to check if a binary tree is balanced. For the purposes of this question, a balanced tree is defined to be a tree such that the heights of the two subtrees of any node never differ by more than one.

Input format
Line 1: Number of Test cases (T)

Line 2 to X: First Test Case binary tree structure (refer section below for the format)

Line X+1 to Y: Second Test Case details and so on.

Output format
For each test case, print N (number of nodes in the tree) space separated values of next nodes on a separate line. If nothing exists in the next print "null" without quotes.

Constraints
1 <= T <= 100

1 <= N <= 100000

0 <= Value of nodes <= 10^9

It is guaranteed that the sum of the number of tree nodes across all test cases will be less than 500000.

Sample Input 1
1

3

1 2 3

1 2 3

2 -1 -1

3 -1 -1

Sample Output 1
Yes

Explanation 1
For each node the difference of depth of left subtree and right subtree is less than equal to 1 so the tree is balanced.

Sample Input 2
1

3

1 2 3

1 2 -1

2 3 -1

3 -1 -1

Sample Output 2
No

Explanation 2
Node(1) has depth of the left subtree is 2 and depth of right subtree is 0 hence the tree is unbalanced.

Instructions to create custom input for a Binary Tree
In order to specify a binary tree that can be used as custom input to the problem, you’ll need to follow this convention.

Line 1: Number of nodes in the Binary Tree (N)

Line 2: N space separated node values. The position of the Nodes on this line will be used to refer to them in the below lines, starting from 1.

Line 3 to N+2: Lines specifying the child nodes for each of the N nodes

Format of each line (space separated): Parent_node Left_child_node Right_child_node

* Parent_node - Node at this Position on Line 2 is the Node to which we are assigning the Left and Right child here

* Left_child_node - Node at this position on Line 2 is the left child. Specify -1 if there is no Left child.

* Right_child_node - Node at this position on Line 2 is the right child. Specify -1 if there is no Right child.


*/

class CheckBalanced {
public:
    int height(TreeNode* node){
        if(node==NULL)return 0;
        return 1+max(height(node->left),height(node->right));
    }

    bool checkBalanced(TreeNode *root)
    {
         if(root==NULL)return true;
         int lHeight=height(root->left);
         int rHeight=height(root->right);
         if(abs(lHeight-rHeight)>1)return false;
         return checkBalanced(root->left)&&checkBalanced(root->right);
    }
};
