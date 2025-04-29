/*
  Problem Description
Given a string, count the total number of vowels present in that string.

Note: The string contains uppercase and lowercase english alphabets only.

Input format
One line of input, which contains the given string.

Output format
Print the total number of vowels.

Sample Input 1
language

Sample Output 1
4

Explanation 1
There are a total of 4 vowels in the string "language" i.e. 'a', 'u', 'a', 'e'.

Constraints
0 < Length of string < 100
*/

int countVowels(string s){
      int cnt=0;
      for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')cnt++;
      }
      return cnt;

}
