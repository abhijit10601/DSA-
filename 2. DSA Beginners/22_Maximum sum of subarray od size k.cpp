/*
Problem Description
Given an array of integers and a number k, find the maximum sum of a subarray of size k.

Input format
First line of input contains two integers N and K, where N is the size of the array and K is the subarray size.

Second line of input contains N integers denoting the array elements.

Output format
Print the maximum sum of a subarray of size k.

Sample Input 1
4 2

100 200 300 400

Sample Output 1
700

Explanation
We get maximum sum by adding subarray {300,400}

of size 2.

Constraints
1<=K<=N<=100000

0<=abs(arr[i])<=10000
*/

int maximumSubarraySumSizeK(vector<int>&arr, int n, int k){
  //Brute Force- O(N*K) 
  /* int maxi=INT_MIN;
   for(int i=0;i<n;i++){
       int sum=0;
       for(int j=i;j<i+k;j++){
           sum+=arr[j];
       }
       maxi=max(maxi,sum);
   }
   return maxi;*/



   // SLIDING WINDOW - O(N^2)
   if(n<k)return -1;

   int maxi=0;
   int windowSum=0;
   //1st window
   for(int i=0;i<k;i++)windowSum+=arr[i];

   maxi=windowSum;

   //slide the window across;
   for(int i=k;i<n;i++){
       windowSum+=arr[i]-arr[i-k];
       maxi=max(maxi,windowSum);
   }
   
   return maxi;

}
