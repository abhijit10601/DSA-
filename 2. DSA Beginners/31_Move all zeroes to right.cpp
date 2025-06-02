/*
Problem Description
Given an array A, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Input format
First line will contain a single integer N representing the size of array

Next line will contain N space separated integers representing the array A.

Output format
First line should contain N space separated integers.

Sample Input 1
2

0 1

Sample Output 1
1 0

Constraints:
1<=N<=200000

0<=A[i]<=100000
*/

vector<int > moveZeroes(vector<int > arr)
{   /* int n=arr.size();
	 vector<int> ans(n,0);
     int i=0;
  for(auto a:arr){
	  if(a!=0)ans[i++]=a;
	    }
  return ans;*/

  int i=0;//place i to the 1st zero for cases like 1110110000
  //a loop is suggested to be used
  for(int j=0;j<arr.size();j++){
	  if(arr[j]!=0)swap(arr[j],arr[i++]);
  }
  return arr;
}
