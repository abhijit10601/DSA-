/*
Problem Description
Count the number of prime numbers less than a non-negative number, n.

Input format
Single line containing one integer N

Output format
Single line containing one number denoting the number of prime numbers less than N

Sample Input 1
10

Sample Output 1
4

Explanation
There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/
class CountPrimes {
public:
   /* METHOD 1
   bool isprime(int n){
        if(n<2)return false;
        if(n==2)return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }*/
    int countPrimes(int n) {
      /* METHOD 1
      
       int ans = 0;
        for(int i=2;i<n;i++){// asked prime numbers less than n , excluding n
            if(isprime(i))ans++;
        }
        return ans;*/


//  METHOD 2 - SIEVE OF ERATOSTHENES
        vector<int> p(n+1,1);
        for(int i=2;i*i<=n;i++){
            if(p[i]==1){
            for(int j=i*i;j<=n;j=j+i){
                p[j]=0;
            }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(p[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};
