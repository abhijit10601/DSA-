/*
Problem Description
Given an integer A, generate a square matrix filled with elements from 1 to A*A in spiral order. The spiral order will be clockwise in nature starting from (0,0)

Input format
One line of input, containing a single integer A.

Output format
Print a 2-d matrix of size A x A satisfying the spiral order.

Sample Input 1
3

Sample Output 1
1 2 3

8 9 4

7 6 5

Explanation
As you can see the matrix goes spirally with each next position incremented by one.

Constraints
1<=A<=1000
*/

vector<vector<int > > spiralMatrixII(int size){
     vector<vector<int > > ans(size,vector<int>(size));
     
     int element=1;
     int n=size;
     int m=size;
     int left=0,right=m-1,top=0,bottom=n-1;
     int count=0;
     int total=n*m;

     while(count<total){
         // L->R
         for(int i=left;i<=right&&count<total;i++){
             ans[top][i]=element++;            
             count++;
         }
         top++;
   
        // T -> B
        for(int i=top;i<=bottom&&count<total;i++){
             ans[i][right]=element++;
             count++;
         }
         right--;

        // R -> L
         for(int i=right;i>=left&&count<total;i--){
             ans[bottom][i]=element++;
             count++;
         }
         bottom--;

         // B -> T
          for(int i= bottom;i>=top&&count<total;i--){
             ans[i][left]=element++;
             count++;
         }
        left++;

     }

     return ans;

}
