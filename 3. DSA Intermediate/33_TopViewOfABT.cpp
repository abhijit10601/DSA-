/*
oblem Description
You are given a binary tree. You need to find the nodes in order of left to right which will be visible when the tree is viewed from the top.

Top view :-

image

The visible nodes from left to right are 4, 2, 1 and 3.

Input format
First line contains an integer n - Number of nodes.

Second line contains n space separated integers - The value of nodes.

Next n lines contain 3 space separated integers i, l, r describing left and right child of ith node as l and r respectively.

Output format
Output space separated values of the nodes visible from top of the tree from left to right.

Sample Input 1
7

10 15 25 12 40 16 20

4 -1 -1

1 5 3

5 6 -1

6 -1 7

2 -1 -1

3 2 4

7 -1 -1

Sample Output 1
16 40 10 25 12

Explanation
The binary tree is:-

image

The visible nodes from left to right are 16, 40, 10, 25 and 12.

Constraints
1 <= N <= 10^5

1 <= Values of the Nodes <= 10^9

*/



vector<int> topViewBinaryTree(TreeNode* root) {
    vector<int> ans;
    if(root==NULL)return ans;

    map<int,int> mpp;
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});

    while(!q.empty()){
        auto it=q.front();
        q.pop();

        TreeNode* node=it.first;
        int line=it.second;

        if(mpp.find(line)==mpp.end()){
            mpp[line]=node->val;
        }

        if(node->left!=NULL){
            q.push({node->left,line-1});
        }
         if(node->right!=NULL){
            q.push({node->right,line+1});
        }
    }

     for(auto it:mpp)ans.push_back(it.second);

    return ans;
}
