/*
Problem Description
Find the minimum difference possible between any two elements in the given array.

Input format
There are 2 lines of input.

First line will contain a single integer n representing the size of the array.

Second line will contain n space separated integers representing the array.

Output format
Output the answer in single line.

Sample Input 1
3

1 2 4

Sample Output 1
1

Explanation 1
2 - 1 = 1 minimum difference

Constraints
2<=n<=100000

1<=A[i]<=1000000000
*/

int minDiff(int n, vector<int> arr){
sort(arr.begin(),arr.end());
int mini=INT_MAX;
for(int i=1;i<n;i++)mini=min(mini,arr[i]-arr[i-1]);
return mini;
}
