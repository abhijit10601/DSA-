/*
 Problem Description
You are given a string of words present in a book. Find out the count of words present in that book.

Input format
The first input line has a string s.

Output format
Return the count of words in the string.

Sample Input 1
Java is great Grails is also great

Sample Output 1
7

Explanation
Words present in the string are : 7(Java,is,great,Grails,is,also,great)

Constraints
1 <= s.length <= 2*10^3
*/
int wordCount(string &s){
   int cnt=1;//atleeast 1 word always there
   for(auto &it : s)if(it==' ')cnt++;
   return cnt;
}
