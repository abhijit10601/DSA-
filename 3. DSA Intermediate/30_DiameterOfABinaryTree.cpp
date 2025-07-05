/*
oblem Description
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.

Input format
First line contains an integer n - Number of nodes.

Second line contains n space separated integers - The value of nodes.

Next n lines contain 3 space separated integers i, l, r describing left and right child of ith node as l and r respectively.

Output format
Print an integer - The length of the diameter.

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
6

Explanation
The binary tree is:-

image

The path 8->16->40->10->25->15->9 has 6 edges in it and is the longest path in the given tree.

Cons
*/


#include "../crio/cpp/ds/TreeNode/TreeNode.hpp"

/*
Definition for TreeNode
class TreeNode {
public:
    long val;
    TreeNode* left;
    TreeNode* right;
    TreeNode (long x) {
        val = x;
        left = NULL;
        right = NULL;
    }
}

Use new TreeNode(data) to create new Node
*/
int d=0;

int calc(TreeNode* node){
    if(node==NULL)return 0;

    int leftHeight=calc(node->left);
    int rightHeight=calc(node->right);

    d=max(d,leftHeight+rightHeight);

    return 1+max(leftHeight,rightHeight);

}

int diameterOfBinaryTree(TreeNode* root) {
    calc(root);
    return d;
}
/* 
Crio Methodology

Milestone 1: Understand the problem clearly
1. Ask questions & clarify the problem statement clearly.
2. Take an example or two to confirm your understanding of the input/output

Milestone 2: Finalize approach & execution plan
1. Understand what type of problem you are solving and see if you can recollect solving similar problems in the past
      a. Obvious logic (this would only test ability to convert logic to code)
      b. Figuring out logic
      c. Knowledge of specific algorithm, data structure or pattern
      d. Knowledge of specific domain or concepts
      e. Mapping real world into abstract concepts/data structures
2. Brainstorm multiple ways to solve the problem and pick one based on the TC/SC requirements
3. Get to a point where you can explain your approach to a 10 year old

Milestone 3 : Come up with an Instruction Manual for a 10 year old
1. Take a stab at the high-level logic & write it down like a detailed Instruction Manual for a 10 Year old where each line of the manual can be expanded into a logical line(s) of code.
2. Try to offload logic out of the main section as much as possible by delegating to functions.

Milestone 4: Code by expanding your 10 Year Olds "Instruction Manual
1. Run your code snippets at every logical step to test correctness (Helps avoid debugging larger pieces of code later)
2. Make sure you name the variables, functions clearly.
3. Use libraries as much as possible

Milestone 5: Prove that your code works using custom test cases
1. Make sure you check boundary conditions and other test cases you noted in Milestone 1
      a. If compiler is not available, dry run your code on a whiteboard or paper
2. Suggest optimizations if applicable during interviews
*/
