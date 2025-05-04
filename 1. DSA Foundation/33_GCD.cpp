/*
 Problem Description
Given 2 numbers a and b, you have to find the gcd of these 2 numbers using recursion.

Input format
First line contains an integer t - Number of test cases.

First line of each test contains 2 integers - a and b.

Output format
Print the gcd of each test in a separate line.

Sample Input 1
2

8 20

80 80

Sample Output 1
4

80

Explanation
The gcd of 8 & 20 is 4 as 4 is the greatest number that divides both 8 & 20.

Constraints
t <= 1000

1 <= a, b <= 10^18
*/

/* here A>B , USING RECURSION
long long int GCD_AB(long long int A,long long int B){

    if(A==0)return B;

    return GCD_AB(B,A%B);
}*/

long long int gcd(long long int a, long long int b){
   
    //return __gcd(a,b);
    
     while(a!=0 && b!=0){
        if(a>b){a=a%b;}

        else {b=b%a;}
    }
    if(a==0)return b;
    else return a;

    

    //return GCD_AB(b,a);

}
