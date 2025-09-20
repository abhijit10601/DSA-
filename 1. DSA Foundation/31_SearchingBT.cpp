/*
Problem Description
Given a binary tree and an integer k, you need to check whether a node with data k is present in the tree or not.


Note that input and output are being handled by a main() method behind the scenes, so you do NOT have to implement the main() method or any I/O here. The inputs are sent as arguments to the function you have to implement.


You’d have to implement the function defined in the stub, use the arguments, and return the answer based on the return type of the function.


The structure of the tree is given as a reference for you while writing the code. Do not make any modifications to it, or any of the rest of the stub, or the tests would fail

Input format
There are n+3 lines of input.

First line contains an integer n - Number of nodes.

Second line contains n space separated integers - The value of nodes.

Next n lines contain 3 space separated integers i, l, r describing the left and the right child of ith node as l and r respectively.

Last line contains an integer k - The integer you have to find.

Output format
Return true if k is present, otherwise false.

Sample Input 1
6

4 6 -2 -4 -2 2

1 2 3

2 4 5

3 6 -1

4 -1 -1

5 -1 -1

6 -1 -1

2

Sample Output 1
true

Explanation 1
image

Constraints
0 < n < 1000

-10^9 <= Value of nodes <= 10^9

-10^9 <= k <= 10^9

*/

// EFFICIENT
bool binaryTreeSearching(TreeNode *root, int k)
    { if(root==NULL)return false;
      
      if(root->val==k)return true;

      bool res1=binaryTreeSearching(root->left,k);
      if(res1)return true;

      // not found on left subtree, traverse on right subtree
      bool res2=binaryTreeSearching(root->right,k);
      return res2;

    }


//BRUTE FORCE
    bool binaryTreeSearching(TreeNode *root, int k)
    { if(root==NULL)return false;
      
      if(root->val==k)return true;

      return binaryTreeSearching(root->left,k) || binaryTreeSearching(root->right,k);
    }
