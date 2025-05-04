/*
Problem Description
Given a Binary Number B, find its decimal equivalent.

Input format
First line contains a binary string B

Output format
Return decimal equivalent integer

Sample Input 1
10001000

Sample Output 1
136

Explanation
Binary equivalent of 1001000 = 2^3 + 2^6 = 8+128 = 136

Constraints
1 <= number of bits in binary number <= 16
*/
int binaryToDecimal(string B){
      int p=1;//2^0
      int ans=0;
      for(int i=B.size()-1;i>=0;i--){
            if(B[i]=='1'){
                  ans+=p;
            }
            p=p<<1;
      }
      return ans;
}
