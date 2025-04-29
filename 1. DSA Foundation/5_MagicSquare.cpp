/*
  Problem Description
Given a matrix of dimensions n x n having elements 1 to n*n distinct elements, check whether the matrix is magic square or not.

Magic square is a square that has the same sum along all rows, columns and diagonals.

Input format
There are n + 1 lines of input.

First line contains integer n.

The next n lines contain n space separated elements.

Output format
Print "Yes" if it is a magic square , "No" otherwise.

Sample Input 1
3

4 9 2

3 5 7

8 1 6

Sample Output 1
Yes

Explanation 1
All rows, columns and diagonals have sum 15.

Constraints
1 <= n <= 100

1 <= element of matrix <= n x n
*/


bool checkMagicSquare(vector<vector<int> > mat, int n){
    int row=0;
    for(int i=0;i<n;i++){
      row+=mat[0][i];
    }
 //sum of rows
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=mat[i][j];
        }
        if(sum!=row)return false;
    }
//sum of col
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=mat[j][i];
        }
        if(sum!=row)return false;
    }

//sum of diagonal
int d1=0,d2=0;
    for(int i=0;i<n;i++){      
           d1+=mat[i][i];

            d2+=mat[i][n-1-i];      
    } 
     if(d1!=row || d2!=row)return false;

     return true;

      
}
