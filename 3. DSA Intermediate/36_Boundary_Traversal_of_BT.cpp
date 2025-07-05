/*
blem Description
Given a binary tree, print boundary nodes of the binary tree Anti-Clockwise starting from the root. The boundary includes left boundary, leaves, and right boundary in order.

The left boundary is defined as the path from the root to the left-most node. The right boundary is defined as the path from the root to the right-most node. If the root doesn’t have a left subtree or right subtree, then the root itself is left boundary or right boundary. Note this definition only applies to the input binary tree, and not to any subtrees.

The left-most node is defined as a leaf node you could reach when you always firstly travel to the left subtree if it exists. If not, travel to the right subtree. Repeat until you reach a leaf node.

The right-most node is also defined in the same way with left and right exchanged.

Example:-

image

The output for this tree would be 1,2,4,5,6 and 3.

Input format
First line contains an integer n - Number of nodes.

Second line contains n space separated integers - The value of nodes.

Next n lines contain 3 space separated integers i, l, r describing left and right child of ith node as l and r respectively.

Output format
Output space separated values of the nodes.

Sample Input 1
8

10 15 25 12 40 16 8 9

1 5 3

5 6 -1

6 -1 7

7 -1 -1

3 2 4

2 8 -1

8 -1 -1

4 -1 -1

Sample Output 1
10 40 16 8 9 12 25

Explanation
The binary tree is:-

image

Boundary traversal starts from the root node i.e. 10 then the left boundary i.e. 10, 40, 16, 8, the leaf nodes i.e. 8, 9, 12 and finally the right boundary i.e. 12, 25, 10. We won't take a particular node twice so the final answer after ignoring the repeated nodes would be - 10, 40, 16, 8, 9, 12, 25.

Sample Input 2
4

1 2 3 4

1 2 -1

2 -1 3

3 4 -1

4 -1 -1

Sample Output 2
1 2 3 4

Explanation
The binary tree is:-

image

The left boundary for this tree is 1, 2, 3, 4.

4 is the only leaf node and the right boundary consists only of the root node.

Constraints
*/


void printLeft(TreeNode* root,vector<int>&res){
    if(root==NULL)return;

    if(root->left){
       res.push_back(root->val);
       printLeft(root->left,res);
    }
    else if(root->right){
        res.push_back(root->val);
         printLeft(root->right,res);
    }
}

void printRight(TreeNode* root,vector<int>&res){
    if(root==NULL)return;

    if(root->right){
        printRight(root->right,res);
        res.push_back(root->val);  
    }
    else if(root->left){
         printRight(root->left,res);
         res.push_back(root->val);
    }
}

void printLeaf(TreeNode* root,vector<int>&res){
    if(root==NULL)return;
   
    printLeaf(root->left,res);
    if(!(root->left)&&!(root->right)) res.push_back(root->val);
    printLeaf(root->right,res);

}

/*
1.print boundry left excluding leaves
2.print leaf nodes
3.print boundry rightt excluding leaves
*/
vector<int> binaryTreeBoundaryTraversal(TreeNode* root) {
    vector<int> ans;

    if(root==NULL)return ans;
    ans.push_back(root->val);
 
    printLeft(root->left,ans);

    printLeaf(root->left,ans);
    printLeaf(root->right,ans);

    printRight(root->right,ans);

    return ans;
}
