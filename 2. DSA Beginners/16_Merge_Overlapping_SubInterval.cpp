/*
Problem Description
An interval is a range, with a starting value and ending value. [1, 3] indicates elements 1, 2, 3 and so on.

Given a collection of intervals, merge all overlapping intervals. The result should only have mutually exclusive intervals - meaning that no number should be common between two intervals, in the result.

Note: The merged intervals should be printed in increasing order of start value.

Input format
There are N+1 lines of input.

First line contains N, the number of intervals

Next N lines contain 2 space separated integers A and B, which represent the start and end of an interval

Output format
For the X merged intervals, print each interval (the start and end being space separated) on a separate line

Constraints
1 <= N <= 50000

0 <= A, B <= 1e9

B >= A

Sample Input 1
4

1 3

2 6

8 10

15 18

Sample Output 1
1 6

8 10

15 18

Explanation 1
Since intervals [1 3] and [2 6] overlap, merge them into [1 6]

Sample Input 2
2

1 4

4 5

Sample Output 2
1 5

Explanation 2
Intervals [1 4] and [4 5] overlap and get merged into [1 5]
*/

   vector<vector<int>> mergeIntervals(vector<vector<int>>& arr) {
          int n=arr.size();
          sort(arr.begin(),arr.end());//sorting based on arr[0][i] elements
          vector<vector<int>> ans;
          for(int i=0;i<n;i++){
                if(ans.empty()||arr[i][0]>ans.back()[1]){
                      ans.push_back(arr[i]);}
                else{
                      ans.back()[1]=max(ans.back()[1],arr[i][1]);
                }
          }
          return ans;
    }
