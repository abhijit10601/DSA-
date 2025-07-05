/*
Given preorder and inorder traversal of a tree, construct the binary tree.

Note: You may assume that duplicates do not exist in the tree.

Input format
First line contains N, the number of elements in the tree.

Next line contains N space separated integers, denoting preorder.

Next line contains N space separated integers, denoting inorder.

Output format
Print two lines by traversing the constructed binary tree.

First line should contain N space separated integers, denoting preorder.

Second line should contain N space separated integers, denoting inorder.

Sample Input 1
6

1 2 4 5 3 6

5 4 2 1 3 6

Sample Output 1
1 2 4 5 3 6

5 4 2 1 3 6

Explanation 1
The output writes out the preorder and inorder sequence by traversing the binary tree constructed
*/

int search(vector<int> &inorder,int value,int left,int right){
      for(int i=left;i<=right;i++){
          if(inorder[i]==value){
              return i;
          }
      }
      return -1;
}

TreeNode* buildTree(vector<int> &inorder, vector<int> &preorder,int &preIndex,int left,int right){
    if(left>right)return NULL;

    int rootVal=preorder[preIndex];
    preIndex++;

    TreeNode* root=new TreeNode(rootVal);
    int index=search(inorder,rootVal,left,right);
    
    root->left=buildTree(inorder,preorder,preIndex,left,index-1);
    root->right=buildTree(inorder,preorder,preIndex,index+1,right);
    return root;

}

TreeNode* constructBinaryTreeFromPreorderAndInorderTraversal(vector<int> &preorder, vector<int> &inorder) {
    int preIndex=0;
    TreeNode* root=buildTree(inorder,preorder,preIndex,0,preorder.size()-1);
    return root;
}
