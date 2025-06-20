/*
roblem Description
A string S is given consisting of lowercase alphabetical characters only. You need to return a sorted string using Count Sort.

Input format
First line will contain a single integer n representing size of the given string.

Second line will contain a single string S of size n.

Output format
Output the string in a single line.

Sample Input 1
10

abcdeedcba

Sample Output 1
aabbccddee

Constraints
1<=n<=10^6

String S will contain lowercase alphabetical characters only

Crio Methodology - Problem Approach
*/

string countSort(int n, string s){
      //count freq in ds (ordered ds like map unlike ds like unordered map)
      // travel the ds and print 
      string ans="";
      map<char,int> mpp;
      for(int i=0;i<s.size();i++)mpp[s[i]]++;
      for(auto it:mpp){
            int i=0;
            while(i<it.second){ans+=it.first;i++;}
      }
      return ans;
      
}
