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


// OPTIMAL --> T.C.=O(N), S.C.=O(1)
string reverseWords(string s) {
    int n = s.size();

    // Step 1: Reverse the entire string.
    reverse(s.begin(), s.end());

    // Step 2: Reverse words individually.
    int start = 0, end = 0;
    while (end < n) {
        // Skip leading spaces to find the start of a word.
        while (start < n && s[start] == ' ')++start;

        end = start;

        // Find the boundary of the word.
        while (end < n && s[end] != ' ')++end;

        // Reverse the word.
        reverse(s.begin() + start, s.begin() + end);

        // Move to the next word.
        start = end;
    }

    // Step 3: Clean up extra spaces in-place.
    int read = 0, write = 0;

    while (read < n) {

        // Skip leading spaces.
        while (read < n && s[read] == ' ')++read;

        // Copy the word.
        while (read < n && s[read] != ' ')s[write++] = s[read++];

        // Skip multiple spaces.
        while (read < n && s[read] == ' ')++read;

        // Add a single space if more content exists.
        if (read < n)s[write++] = ' ';
    }

    // Return the trimmed result.
    return s.substr(0, write);
}






//T.C.= O(N),S.C.=O(N)
string reverseWords(string s) {
    reverse(s.begin(), s.end());
    string ans;
    int n = s.length();
    
    for (int i = 0; i < n; ++i) {
        // skip any spaces
        if (s[i] == ' ') continue;
        
        // collect the next word in reversed s
        string word;
        while (i < n && s[i] != ' ') {
            word += s[i++];
        }
        
        // reverse it back
        reverse(word.begin(), word.end());
        
        // append (with leading space if ans not empty) // space between two words 
        if (!ans.empty())ans += ' ';
        ans += word;
    }
    
    return ans;
}

