/*
Problem Description
You are given a string s, consisting of lowercase letters. You need to make duplicate removal on s until you no longer can.


A duplicate removal consists of choosing two adjacent equal characters and removing both of them.
Return the final string after all such duplicate removals have been made.
Input format
The first line contains a single string s.

Output format
Print the final string after duplicate removals.

Function definition
You have to complete the given function. It accepts one argument -the input string, and returns the updated string.

Sample Input 1
abbaca

Sample Output 1
ca

Explanation
Initial String: abbaca

After removing "bb" : aaca

After removing "aa" : ca (There are no more duplicates)
*/

string removeAdjacentDuplicates(string s)
{  stack<char> st;
   for(int i=0;i<s.size();i++){
         if(!st.empty()&&s[i]==st.top())st.pop();

         else st.push(s[i]);
      
         
   }
   string ans="";
   while(!st.empty()){
         ans.push_back(st.top());
         st.pop();
   }
   reverse(ans.begin(),ans.end());
   return ans;
   
}
