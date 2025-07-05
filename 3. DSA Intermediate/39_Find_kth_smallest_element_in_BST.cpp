/*
roblem Description
Given a binary search tree, write a function to find the node with the kth smallest value in it and return its value.

Note: You may assume that k is always valid, 1 ≤ k ≤ BST's total elements.

Input format
Line1 to X: Details of the binary tree structure (refer section below for the format)

Last line contains a single integer k.

Output format
Print the value of the kth smallest element.

Constraints
1 <= Number of nodes (N) <= 105

1 <= Value of nodes <= 109

1 <= k <= N

Sample Input 1
4

3 1 4 2

1 2 3

2 -1 4

3 -1 -1

4 -1 -1

1

Sample Output 1
1

Explanation 1
image

1 is the 1st smallest element in this BST

Resources
Kth smallest in a BST
Instructions to create custom input for a Binary Tree
In order to specify a binary tree that can be used as custom input to the problem, you’ll need to follow this convention.

Line 1: Number of nodes in the Binary Tree (N)

Line 2: N space separated node values. The position of the Nodes on this line will be used to refer to them in the below lines, starting from 1.

Line 3 to N+2: Lines specifying the child nodes for each of the N nodes

Format of each line (space separated): Parent_node Left_child_node Right_child_node

Parent_node - Node at this Position on Line 2 is the Node to which we are assigning the Left and Right child here

Left_child_node - Node at this position on Line 2 is the left child. Specify -1 if there is no Left child.

Right_child_node - Node at this position on Line 2 is the right child. Specify -1 if there is no Right child.

Example1
image

*/

int kSmallRec(TreeNode* root,int &cnt ,int k){
    if(root==NULL)return -1;

    int left=kSmallRec(root->left,cnt,k);
    if(left!=-1)return left;

    cnt++;

    if(cnt==k)return root->val;

   
    return  kSmallRec(root->right,cnt,k);;
}

int kthSmallestElementInABst(TreeNode* root, int k) {
    int cnt=0;
    return kSmallRec(root,cnt,k);
}
