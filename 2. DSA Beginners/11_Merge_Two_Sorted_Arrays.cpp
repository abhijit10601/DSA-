/*
Problem Description
Given two sorted arrays of size M and N, merge the two arrays and return the final array, sorted.

Input format
A single Integer M, that contains the number of elements in the first array.

A single Integer N, that contains the number of elements in the second array.

Next Line contains M space Integers of the array nums1.

Next Line contains N space Integers of the array nums2.

Output format
Print the array after merging.

Sample Input 1
3

3

1 2 3

2 5 6

Sample Output 1
1 2 2 3 5 6

Explanation 1
The sorted array is returned after merging.

Constraints
1 <= N,M <= 10^5

|nums1[i] | <= 10^9

|nums2[i] | <= 10^9
*/

vector<int> mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      vector<int> ans;
      int i=0;int j=0;
      while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                  ans.push_back(nums1[i]);
                  i++;
            }

            else if(nums1[i]>nums2[j]){
                   ans.push_back(nums2[j]);
                   j++;
            }

            else{//nums1[i]==nums2[j]
                ans.push_back(nums1[i]);
                   i++;
                ans.push_back(nums2[j]);
                   j++;   
            }
      }

      while(i<m){
           ans.push_back(nums1[i]);
                  i++;  
      }
      while(j<n){
           ans.push_back(nums2[j]);
                  j++;  
      }


      return ans;
}
