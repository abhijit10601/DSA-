/*
Problem Description
Given an array of numbers, find GCD of the array elements.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

Input format
First line contains n, the number of integers. Second line contains n space separated integers.

Output format
Return the gcd of array.

Sample Input 1
4

4 6 8 16

Sample Output 1
2

Explanation
gcd(4,6,8,16) = 2, as 2 is the greatest number that divides all four numbers

Constraints
2 <= n <= 10^3

1 <= nums[i] <= 10^3
*/
int GCD(int a,int b){
    while(a!=0 && b!=0){
        if(a>b)a=a%b;
        else b=b%a;
    }
    if(a==0)return b;
    else return a;
}
int gcdOfArray(int n,int arr[]){
    int gcd=1;

    for(int i=1;i<n;i++){
        int temp=GCD(arr[i],arr[i-1]);
        arr[i]=temp;
    }
    return arr[n-1];
}
