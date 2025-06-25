/*
Problem Description
Given a string S containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

Input format
First line contains a string - The string S.

Output format
Print the length of the longest valid substring.

Sample Input 1
()(()(())

Sample Output 1
6

Explanation
The last 6 characters of the string forms the longest valid substring i.e. "()(())".

Constraints
0 <= length of string <= 10^5
*/


int longestValidParentheses(string s){
     /* int maxi=0;
      int curr=0;
      stack<int> st;
      for(int i=0;i<s.size();i++){
            if(st.empty()){
                 // maxi=max(i,maxi);
                  curr=0;
                  st.push(s[i]);
            }
            else{
                  if(st.top()=='(' && s[i]==')' ||st.top()=='{' && s[i]=='}' || st.top()=='[' && s[i]==']'  ){
                        st.pop();
                        if(st.empty()){
                              maxi=max(maxi,curr);
                        }
                  }

                  else {
                        st.push(s[i]);
                        curr++;
                        }
            }
      }
      return maxi;*/
     /* int cur=0;
      int maxi=0;
      for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                  cur++;maxi=max(cur,maxi);
            }
            else cur--;
      }
      return maxi*2;*/

      stack<int> st;
      st.push(-1);// to handle edge case () 
      int maxi=0;
      for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                  st.push(i);//pushing index
            }
            else{ // s[i]==)
                  st.pop();
                  if(st.empty())st.push(i);//push starting index for next substr 
                  else maxi=max(maxi,i-st.top());//updating maxi
            }
      }
      return maxi;
}


