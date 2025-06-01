/*
Problem Description
Given an unsorted array, sort it in wave form. That is, reorder it such that nums[0] <= nums[1] >= nums[2] <= nums[3]....

Input format
There are 2 lines of input.

First line contains an integer N ,the number of input integers in the array.

Second line contains N space separated integers.

Output format
N space separated elements which satisfy the given condition.

Sample Input 1
6

1 5 1 1 6 4

Sample Output 1
1 4 1 5 1 6

Explanation 1
nums[0] <= nums[1] >= nums[2] <= nums[3] >= nums[4] <= nums[5].
*/

vector<int> wiggleSort(vector<int> &arr , int n) {
  vector<int>ans(n); 
  sort(arr.begin(),arr.end());
  
  int mid=(n-1)/2;
  int left=mid;
  int right=n-1;
 for(int i=0;i<n;i++){
	 if(i%2==0)ans[i]=arr[left--];
	 else ans[i]=arr[right--];
 }

  
  return ans;

}
