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
