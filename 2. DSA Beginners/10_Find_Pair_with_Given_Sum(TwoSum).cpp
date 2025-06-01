/*
Problem Description
Given a sorted array of integers and a target, find if there’s a pair of elements that add up to the target. Return true if such a pair can be found, and false otherwise.

Input format
There are 3 lines of input.

First line contains an Integer N that represents the number of elements in the array.

Second line contains N space-separated integers, which are members of the array.

Third line contains an integer X, which is the target value.

Output format
Return a boolean, true representing "Present" and false representing “Not Present”

NOTE: Do not return a string ("Present" or “Not Present”)

Constraints
2 <= Length of array <= 10^5

1 <= Range of values <= 10^6

Sample Input 1
5

2 4 5 8 9

7

Sample Output 1
Present

Explanation 1
Since 0 and 2 are the indices where the numbers 2 and 5 which add up to 7 are seen, the function returns true which leads to "Present" being printed as the output.
*/

bool twoSumInSortedArray(int n, vector<int> arr, int target){

    sort(arr.begin(),arr.end());
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target)return true;

        else if(arr[i]+arr[j]>target)j--;

        else{//arr[i]+arr[j]<target
           i++;
        } 
    }
    return false;
    
    }
