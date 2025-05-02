/*
 Problem Description
Given two matrices of dimension n x m, add the two matrices and print the resultant matrix.

Input format
There are 2n+1 lines of input.

First line contains two space separated integers n, m.

In the next 2n lines, each line contains m elements. The first n lines are for the first matrix, next n for the second matrix.

Output format
Print the resultant matrix.

Sample Input 1
2 2

1 2

3 4

1 1

1 1

Sample Output 1
2 3

4 5

Constraints
1 <= n,m <= 100

0 <= element of matrices <= 100000
*/

vector<vector<int>> additionOfMatrix(vector<vector<int> > matrixOne,vector<vector<int> >matrixTwo, int n, int m) {
    vector<vector<int>> ans(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        ans[i][j]=matrixOne[i][j]+matrixTwo[i][j];
    }
    }
    return ans;
}
