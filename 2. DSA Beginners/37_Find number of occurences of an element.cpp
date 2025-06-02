/*
Given a sorted integer array of length n with possible duplicate elements. Find the number of occurrences of an integer k using binary search.

Input format
There are 2 lines of input.

First line contains 2 space separated integers n, k - Number of elements, the integer k.

Second line contains n space separated integers - The integer array.

Output format
Print the number of occurrences of the integer k.

Sample Input 1
5 2

-1 2 2 4 7

Sample Output 1
2

Explanation 1
The integer 2 occurs 2 times in the given array.

Constraints
1 <= n <= 10^6

-10^9 <= k <= 10^9

-10^9 <= A[i] <= 10^9
*/

int LeftOccur(vector<int> &arr , int k){
int l=0,r=arr.size()-1;
int ans=-1;
while(l<=r){
int mid=(l+r)/2;
if(arr[mid]==k){
    ans=mid;
    r=mid-1;
}
else if(arr[mid]>k){
    r=mid-1;
}
else{
    l=mid+1;
}
}
return ans;
}

int RightOccur(vector<int> &arr , int k){
int l=0,r=arr.size()-1;
int ans=-1;
while(l<=r){
int mid=(l+r)/2;
if(arr[mid]==k){
ans=mid;
l=mid+1;
}
else if(arr[mid]>k){
    r=mid-1;
}
else{
    l=mid+1;
}
}
return ans;
}

int countOccurrences(int n, vector<int> &arr, int k){
    int left=LeftOccur(arr,k);
    int right=RightOccur(arr,k);

    if(left==-1||right==-1)return 0;

    return right-left+1;
}
