/*
Problem Description
Given a decimal number n, compute its binary equivalent.

Input format
First line contains an integer - n

Output format
Return the binary equivalent of decimal number

Sample Input 1
7

Sample Output 1
111

Explanation
111 -> 2^0 + 2^1 + 2^2

1 + 2 + 4 = 7

Constraints
1 <= n <= 1000
*/

int decimalToBinary(int n){
      string s="";
      while(n!=0){
            s=to_string(n%2)+s;
            n=n/2;
      }
      return stoi(s);
}
