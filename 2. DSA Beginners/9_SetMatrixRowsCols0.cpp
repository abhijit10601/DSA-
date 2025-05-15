/*
Problem Description
Given an m x n matrix, if an element is 0, set its entire row and column to 0.

Do it in-place, that is, modify the same matrix. Do not create a new one.

Input format
First line contains 2 integers m,n - number of rows and columns respectively.

Next m lines contain space separated n integers.

Output format
Output the same matrix.

Sample Input 1
3 3

1 1 1

1 0 1

1 1 1

Sample Output 1
1 0 1

0 0 0

1 0 1

Explanation 1
There is one ‘0’ in the 2nd row and 2nd column, so all the elements in that row and column become 0.

Sample Input 2
3 4

0 1 2 0

3 4 5 2

1 3 1 5

Sample Output 2
0 0 0 0

0 4 5 0

0 3 1 0

Explanation 2
The 1st row, 1st column and 4th column all contain ‘0’, so all the values in these rows & columns become 0.

Constraints
M,N <= 500
*/

//METHOD 1
 void setMatrixZeroes(vector<vector<int>>& matrix) {
    //METHOD 1 using extra space S.C.=O(N)+O(M)
      vector<int> row(matrix.size(),1);
      vector<int> col(matrix[0].size(),1);
     
      for(int i=0;i<matrix.size();i++){
          for(int j=0;j<matrix[0].size();j++){
          if(matrix[i][j]==0){
              row[i]=0;
              col[j]=0;
          }
      }
      }

      for(int i=0;i<matrix.size();i++){
          for(int j=0;j<matrix[0].size();j++){
          if(row[i]==0||col[j]==0){
              matrix[i][j]=0;
          }
      }
      }

    }

//OPTIMAL
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    // int row[n] = {0}; --> matrix[..][0]
    // int col[m] = {0}; --> matrix[0][..]

    int col0 = 1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark i-th row:
                matrix[i][0] = 0;

                // mark j-th column:
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] != 0) {
                // check for col & row:
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    //step 3: Finally mark the 1st col & then 1st row:
    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}
