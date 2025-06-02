/*
Problem Description
Given nxn matrix where each of the rows and columns are sorted in ascending order, find the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.

Input format
First line contains two integers. N, denoting the size of the square matrix and K where we have to find the Kth Smallest element.

Next N lines contain N integers each denoting the elements of the matrix.

Output format
Single containing one integer denoting the Kth smallest element.

Sample Input 1
3 8

1 5 9

10 11 13

12 13 15

Sample Output 1
13

Explanation 1
If written in non-decreasing order, elements are,

1 5 9 10 11 12 13 13 15

Hence, 8th smallest element is 13.

Constraints
1<=N<=1000

0<=Ai<=10^9
*/


int countLessEqual(const vector<vector<int>>& matrix, int mid, int n) {
    int count = 0;
    int row = n - 1;
    int col = 0;

    // Count elements less than or equal to mid
    while (row >= 0 && col < n) {
        if (matrix[row][col] <= mid) {
            count += (row + 1); // All elements in this row from row 0 to the current row are <= mid
            col++; // Move to the next column
        } else {
            row--; // Move up
        }
    }

    return count;
}
int kthSmallestElementInMatrix(vector<vector<int>> matrix,int k)
{ /* BRUTE FORCE

  vector<int> arr;
  for(int i=0;i<matrix.size();i++){
      for(int j=0;j<matrix[0].size();j++){
          arr.push_back(matrix[i][j]);
      }
  }
  sort(arr.begin(),arr.end());
  return arr[k-1];*/


  // SEARCH SPACE REDUCTION
  int n=matrix.size();
  int low = matrix[0][0];
    int high = matrix[n - 1][n - 1];

    while (low < high) {
        int mid = (low + high) / 2;
        int count = countLessEqual(matrix, mid, n);

        if (count < k) {
            low = mid + 1; // Move search range up
        } else {
            high = mid; // Move search range down
        }
    }

    return low; 

}
