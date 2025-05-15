/*
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words.

The returned string should only have a single space separating the words.

Do not include any extra spaces.

Input format
String s.

Output format
The function should return a string of the words in reverse order concatenated by a single space.

Sample Input 1
hello world

Sample Output 1
world hello

Explanation
The given words after being reversed gives:world hello

Your reversed string should not contain leading or trailing spaces.

Constraints
1 <= s.length <= 10^5

s contains English letters (upper-case and lower-case), digits, and spaces ' '.

There is at least one word in s.
*/

//USING STACK
string reverseWordsInAString(string s){
  
  stack<string> st;
  string str="";
  for(int i=0;i<s.size();i++){
        if(s[i]==' '){
              if(!str.empty()){//ignoring multiple spaces
                    st.push(str);
                    str="";
              }
        }
        else{
              str+=s[i];
        }
  }

  if(!str.empty())st.push(str);//if word left in str after loop (I am a boy) 
                               //here boy wont be pushed as no spaces after boy

  string ans="";
  while(!st.empty()){
     ans+=st.top();
     st.pop();
     if(!st.empty()){
           ans+=" ";
     }
  }
 

  return ans;

}

//USING STREAMS
string reverseWordsInAString(string s){
      istringstream iss(s);
    vector<string> words;
    string word;
    
    // Extract words from the string
    while (iss >> word) {
        words.push_back(word);
    }
    
    // Reverse the order of words
    reverse(words.begin(), words.end());
    
    // Concatenate the words with a single space
  string result;
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}
