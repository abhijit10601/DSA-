/*
roblem Description
Given a Binary Search Tree (BST) and a positive integer k, find the k’th largest element in the Binary Search Tree.

Input format
First line contains an integer n - Number of nodes.

Second line contains n space separated integers - The value of nodes.

Next n lines contain 3 space separated integers i, l, r describing left and right child of ith node as l and r respectively.

Last line contains an integer k - The kth largest element to be searched

Output format
Print the value of the kth largest element.

Sample Input 1
7

40 20 60 10 30 50 70

1 2 3

2 4 5

3 6 7

4 -1 -1

5 -1 -1

6 -1 -1

7 -1 -1

3

Sample Output 1
50

Explanation
The binary search tree is:-

image

Constraints
1 <= N <= 10^5

1 <= Values of the Nodes <= 10^9

1 <= k <= 
*/



int kthLargestElementInABst(TreeNode *root, int k) {
    if(root==NULL)return -1;
 
    TreeNode* curr=root;
    int cnt=0;

    while(curr!=NULL){
        if(curr->right==NULL){cnt++;

            if(cnt==k)return curr->val;

        curr=curr->left;}
        else{
            TreeNode* succ=curr->right;
            while(succ->left!=NULL && succ->left!=curr){
                succ=succ->left;
            }

            if(succ->left==NULL){
                succ->left=curr;
                curr=curr->right;
            }
            else{
                cnt++;
                succ->left=NULL;
                if(cnt==k)return curr->val;
                curr=curr->left;
            }
        }

    }
    return -1;

}
