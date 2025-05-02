/*
 Problem Description
Given a number n, you have to calculate the factorial of that number.

Note : No inbuilt function to be used

Input format
First line contains an integer - n.

Output format
Print the factorial of the given number.

Sample Input 1
3

Sample Output 1
6

Explanation 1
3! = 3.2.1 = 6

Constraints
0 <= n <= 10
*/

int factorial(int n){
      if(n==1 || n==0)return 1;

      return n*factorial(n-1);
}
