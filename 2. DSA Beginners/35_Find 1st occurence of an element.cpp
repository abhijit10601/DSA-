/*
Problem Description
Given a sorted array consisting of 0s and 1s only, find the index of the first 1. If there’s no 1 present in the array, return -1

Input format
There are 2 lines of input

First line will contain a single integer n.

Next line will contain n space separated integers.

Output format
Print the index of first occuring if present, otherwise print -1.

Sample Input 1
4

0 0 1 1

Sample Output 1
2

Constraints
1<=n<=100000

0<=Ai<=1
*/

int zeroOnes(int n, vector<int > arr){
    int l=0,r=arr.size()-1;
    int ans=-1;
    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==1){
            ans=mid;
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    return ans;
}
