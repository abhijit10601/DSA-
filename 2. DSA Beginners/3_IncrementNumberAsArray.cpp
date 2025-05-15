/*
Problem Description
Given a number represented as an array of digits, increment the number by 1, and return the resulting sum as an array.

Input format
There are two lines of input.

First line will contain a single integer N .

Next line will contain N space separated integers for Array A.

Output format
Single integer which will be the incremented number.

Sample Input 1
3

1 1 1

Sample Output 1
112

Explanation
111 + 1 = 112

Constraints
0<=Ai<10

Most significant value will be non-zero in the array.

1<=N<=5000
*/
vector<int> incrementNumber(int n, vector<int > A){

 int ind=n-1;

//start from end and make all 9 to 0 as 9+1=10 eg- 1999 or 1129 or 1123969
//move from end to start
 while(ind>=0 && A[ind]==9){
     A[ind]=0;
     ind--;
 }
 // if all value is 9 , 9999 or 99 
 if(ind<0)A.insert(A.begin(),1,1);
 else{// 1999 to 2000  ,   1129 to 1130
     A[ind]++;
 }

return A;

}
