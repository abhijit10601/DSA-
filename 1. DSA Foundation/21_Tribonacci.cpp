/*
 Problem Description
The Tribonacci sequence Tn is defined as follows: T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

Input format
An integer n.

Output format
An integer Tn.

Sample Input 1
4

Sample Output 1
4

Explanation
T4= T3 + T2 +T1 = 2 +1 + 1 = 4 T3= T2 + T1 +T0 = 1 +1 + 0 = 2

Constraints
0<=n<=15
*/

int tribonacci(int n) 
{ if(n==0||n==1)return n;
if(n<0)return 0;

return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}
