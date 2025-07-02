/*
Problem Description
You are given a string consisting of lower and upper case characters.
You need to find the length of the longest palindrome which you can create by using the characters from the string.
Note: Upper case and lower case characters are different from each other i.e, "Aa" is not a palindrome as 'A' != 'a'.

Input format
There are 2 lines of input

First line contains the size of the string

Second line contains the string.

Output format
Print the length of the longest palindrome possible.

Sample Input 1
4 bbde

Sample Output 1
3

Explanation
The possible 3 size palindrome strings are :- beb and bdb
*/
int longestPalindrome(int n, string s)
{  map<int,int> mp;
   for(auto it:s)mp[it]++;
   int flag=0;
   int cnt=0;
   for(auto it:mp){
         if(it.second%2==0)cnt+=it.second;

         else{flag=1;cnt+=it.second-1;}//odd times like 3,4,5,7...}
   }
      if(flag)cnt++;// handling odd apperance once

      return cnt;

}
