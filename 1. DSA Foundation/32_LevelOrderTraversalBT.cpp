/*
Problem Description
Given a binary tree, return the level order traversal of its nodes' values.(ie, from left to right, level by level).


Note that input and output are being handled by a main() method behind the scenes, so you do NOT have to implement the main() method or any I/O here. The inputs are sent as arguments to the function you have to implement.


You’d have to implement the function defined in the stub, use the arguments, and return the answer based on the return type of the function.


The structure of the tree is given as a reference for you while writing the code. Do not make any modifications to it, or any of the rest of the stub, or the tests would fail

Input Format
First line contains one integer N denoting the number of elements in the array

Next line contains N words denoting the elements of Binary Tree where null means no element.

Constraints
1<=N<=10^5

1<=Ai<=10^9

Output Format
Print elements of each level in a separate line.

Sample Input 1
4

4 3 2 1

1 2 3

2 4 -1

3 -1 -1

4 -1 -1

Treeview:

image

Sample Output 1
4

3 2

1

Sample Input 2
5

5 5 2 4 5

1 2 3

2 -1 4

3 -1 5

4 -1 -1

5 -1 -1

Treeview:

image

Sample Output 2
5

5 2

4 5
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
     vector<vector<int>> ans; 

        if(root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> level;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }

        return ans;
    }
};
