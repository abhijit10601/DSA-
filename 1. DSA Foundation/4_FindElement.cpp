/*
 Problem Description
Given an array of n elements and an integer x,find the index where x is present in the array. If there are multiple occurrences, find the leftmost one. If x is not present, return -1.

Input format
There are three lines of input.

First line contains integer n.

Second line contains n space separated integers representing the array.

Third line contains the value of x.

Output format
An integer representing the index of x in the array.

Sample Input 1
5

1 3 4 2 1

1

Sample Output 1
0

Explanation 1
1 is present at 0 and 4 indexes and the leftmost index is 0.

Constraints
1 <= n <= 100000

0 <= x <= 10^9
*/

int findElement(vector<int> vec, int n, int x) {
    for(int i=0;i<n;i++)
      if(vec[i]==x)
         return i;
    return -1;
/*B.S. only applicable when array is sorted
    int l=0,r=n-1;
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(vec[mid]==x){
            ans=mid;
            r=mid-1;
        }
        else if(vec[mid]>x){
            r=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    return ans;*/
}
