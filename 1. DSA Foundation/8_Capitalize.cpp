/*
  Problem Description
Given a paragraph of words, capitalise the first character of each word and return the updated paragraph.

Note : No inbuilt function such as split() to be used.

Input format
One line of input which contains a string, the paragraph.

Output format
Return the paragraph after capitalising each word.

Sample Input 1
the quick Brown fox jumps over The lazy dog.

Sample Output 1
The Quick Brown Fox Jumps Over The Lazy Dog.

Explanation 1
The first letter of each word has been capitalised and other permitted characters(dot ‘.’) have remained the same.

Sample Input 2
the quick Brown .... fox jumps over The lazy dog

Sample Output 2
The Quick Brown .... Fox Jumps Over The Lazy Dog.

Explanation 2
The first letter of each word has been capitalised and other permitted characters(dot ‘.’) have remained the same.

Constraints
Length of paragraph < 100

The paragraph contains spaces, lowercase, uppercase characters and ‘.’.

Resource
*/



string capitalise(string para){
     // string ans="";
      para[0]=toupper(para[0]);
      
      for(int i=1;i<para.size();i++){
      if(para[i-1]==' ' && isalnum(para[i]))para[i]=toupper(para[i]);}
     
return para;
     
}


// NOTE: Please do not modify this function
int main(){
    string para;
    getline(cin, para);
    string new_para = capitalise(para);
    cout << new_para;
}
