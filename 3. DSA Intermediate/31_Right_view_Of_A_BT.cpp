/*
Problem Description
You are given a binary tree.

You need to find the nodes in order of top to bottom which will be visible when the tree is viewed from the right side.

Right view :-

image

The visible nodes from top to bottom are 1, 3 and 4.

Input format
First line contains an integer n - Number of nodes.

Second line contains n space separated integers - The value of nodes.

Next n lines contain 3 space separated integers i, l, r describing left and right child of ith node as l and r respectively.

Output format
Output space separated values of the nodes visible from right side of the tree from top to bottom.

Sample Input 1
6

10 15 25 12 40 16

4 -1 -1

1 5 3

5 6 -1

6 -1 -1

2 -1 -1

3 2 4

Sample Output 1
10 25 12

Explanation
The binary tree is:-

image

The visible nodes from top to bottom are 10, 25 and 12.

Constraints
1 <= N <= 10^5

1 <= Values of the Nodes <= 10^9

Resources
Right View of a binary tree

Checkli
*/


//last node of every level is right view
void rec(TreeNode* root,int level,vector<int> &res){
    if(root==NULL)return;

    if(res.size()==level)res.push_back(root->val);
       
        rec(root->right,level+1,res);
        rec(root->left,level+1,res);
    
}

vector<int> rightViewBinaryTree(TreeNode* root) {
        vector<int> res;
        rec(root,0,res);
        return res;
}
