/*
Problem Description
Given an integer n, you have to find the nth fibonacci number. The fibonacci sequence is given by 0,1,1,2,3,5,8,... where 0 and 1 are the 0th and 1st fibonacci numbers respectively and every consecutive number is the sum of the previous two numbers in the sequence.

Input format
There is one line of input, containing an integer n.

Output format
Print the nth fibonacci number.

Sample Input 1
3

Sample Output 1
2

Explanation 1
3rd fibonacci number is equal to the sum of 1st and 2nd fibonacci numbers i.e. 1 + 1 = 2.

Constraints
0 <= n <= 20
*/
int nthFibonacciNumber(int n){
      if(n==0||n==1)return n;

      return nthFibonacciNumber(n-2)+nthFibonacciNumber(n-1);
}







// Tabulation
Access web: Turbo

Off
Disable Access web. You won’t have access to the latest internet data.

Turbo
Access web in turbo mode. Faster but limited internet access, suited for quick replies.

In-Depth
PRO
Access web in-depth mode. Slower but has vast internet access, suited for research purposes.


GPT 4o Mini

Hello there! How can I help you today?

int nthFibonacciNumber(int n){
      if(n==0||n==1)return n;

      return nthFibonacciNumber(n-2)+nthFibonacciNumber(n-1);
}

apply tabulation
To convert the recursive Fibonacci function you've provided into a tabulation approach (often referred to as dynamic programming), we will create an array (or a list) to store the Fibonacci numbers as we calculate them, thereby avoiding redundant calculations.

Here is the tabulated version of the Fibonacci function in C++:

cpp

#include <iostream>
#include <vector>

int nthFibonacciNumber(int n) {
    // Handle the base cases
    if (n == 0||n==1) return n;

    // Create a table to store Fibonacci numbers
    vector<int> fib(n + 1);
    
    // Initialize the base cases
    fib[0] = 0;
    fib[1] = 1;

    // Fill the table in a bottom-up manner
    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Return the nth Fibonacci number
    return fib[n];
}
