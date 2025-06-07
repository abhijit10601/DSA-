/*
Problem Description
Given an array in which all numbers except two are repeated once. (i.e. we have 2k+2 numbers and k numbers are occurring twice and remaining two have occurred once).

Find those two numbers in the most efficient way. Return the two numbers in a sorted manner.

Input format
First line of input contains N which denotes the number of elements in the input array.

The next line of input contains N space separated integers.

Output format
Return the two numbers which are present only once in the array in a sorted manner(i.e smaller number first).

Sample Input 1
8

2 3 7 9 11 2 3 11

Sample Output 1
7 9

Explanation
All numbers except 7 and 9 are repeated once.

Constraints
2<=N<=100000

1<=arr[i]<=100000
*/


vector<int> twoNonRepeatingNumbers(int arr[], int n){
    int xr=0;
    for(int i=0;i<n;i++)xr^=arr[i];

    int num1=0;
    int num2=0;

    int b=xr & -xr;

    for(int i=0;i<n;i++){
        if(b&arr[i])num1^=arr[i];
        else num2^=arr[i];
    }

    if(num1<num2)return {num1,num2};

    return {num2,num1};
    
}
