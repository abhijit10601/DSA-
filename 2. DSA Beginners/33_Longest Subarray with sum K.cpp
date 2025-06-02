/*
Problem Description
Given an array containing N integers and an integer K, Your task is to find the length of the longest subarray with the sum of the elements equal to the given value K.

Input format
The first line contains two integers N and K, denoting the size of the array and the sum to be formed respectively. The second line contains N elements, the elements of the array.

Output format
Return a single integer, the size of the longest subarray having sum K.

Sample Input 1
6 15

10 5 2 7 1 9

Sample Output 1
4

Explanation
The longest subarray is [5, 2, 7, 1].

Sample Input 2
6 -5

-5 8 -14 2 4 12

Sample Output 2
5

Explanation
The longest subarray is [-5, 8, -14, 2, 4].

Constraints
1 <= N <= 100000 -100000 <= A[i], K <= 100000
*/

int longestSubarrayHavingSumK(vector<int>&A, int K){

      unordered_map<int,int> mpp;
      int maxi=0;
      int sum=0;
      for(int i=0;i<A.size();i++){
        sum+=A[i];
        
        if(sum==K)maxi=i+1;

        if(mpp.find(sum-K)!=mpp.end()){
        maxi=max(maxi,i-mpp[sum-K]);
        }
    
        mpp[sum]=i;
      }
      return maxi;
}
