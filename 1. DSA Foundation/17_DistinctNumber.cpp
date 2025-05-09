/*
 Problem Description
You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

Input format
The first input line has an integer n: the number of values.

The second line has n integers x1,x2,…,xn.

Output format
Print number of distinct values in the list.

Sample Input 1
5

2 3 2 2 3

Sample Output 1
2

Explanation
There are two distinct values in the list which are 2 and 3.

Constraints
1 <= n <= 2*10^5

1 <= xi <= 10^9
*/
int distinctNumbers(vector<int> &v){
      set<int> s(v.begin(),v.end());
      return s.size();

}
