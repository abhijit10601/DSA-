/*
Problem Description
Given an array, find a non-empty contiguous subarray with the largest sum.

Input format
There are 2 lines of input.

First line contains N, the number of elements in the array.

Second line contains N space separated numbers, representing the array elements.

Output format
A single integer which is the maximum possible contiguous subarray sum

Constraints
1 ≤ N ≤ 10^5

-10^9 ≤ A[i] ≤ 10^9

Sample Input 1
8

-2 -3 4 -1 -2 1 5 -3

Sample Output 1
7

Explanation 1
The subarray [4 -1 -2 1 5] has sum 7, which is the maximum possible.

Crio Methodology - Problem Approach
*/

long long contigiousSequence( vector<long long > &arr) {
   
   //KADANE'S ALGORITHM
    long long maxi=LONG_MIN;
    long long sum=0;

    for(auto it:arr){
          sum+=it;
          
          maxi=max(maxi,sum);

          if(sum<0)sum=0;
    }
    return maxi;

}
