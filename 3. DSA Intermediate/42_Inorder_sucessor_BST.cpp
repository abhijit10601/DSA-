/*
Problem Description
Write an algorithm to find the "next" node (i.e., in-order successor) of a given node in a binary search tree. You may assume that each parent has a link to its child.

Input format
The tree will be given along with the node for which you have to find the successor.

Q: Q number of queries will be given to you.

Output format
Print the value of the successor node. If it doesn’t exist then print -1.

Sample Input 1
3

5 4 6

0 1 2

1 -1 -1

2 -1 -1

2

2

0

Sample Output 1
-1

6

Explanation 1
The tree given in the sample will look like -

image

There will be no successor of node with value 6.

The successor of node having value 5 will be the node with value 6.

Constraints
1<= Number of nodes <= 20000

1<= Q <= 10000

Resources

*/

//smallest on right subtree
class Solution {
    public:
        TreeNode * inOrderSuccessor(TreeNode *root, TreeNode *p) 
        {    if(root==NULL||p==NULL)return NULL;
             
             TreeNode* succ=NULL;
             while(root!=NULL){
                 if(root->val<=p->val){
                     root=root->right;
                 }
                 else{
                     succ=root;
                     root=root->left;
                 }
             }
            // if(succ==NULL)return -1;

             return succ;
        } 
};
