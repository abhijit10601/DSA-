/*
Problem Description
You are given two strings, a main string S, and a pattern P. You have to find the starting indices of the anagrams of P in S.


Anagrams are permutations of a string. For P="abc”, its anagrams are abc,acb,bca,bac,cba,cab.


Note that indexing starts at 0.

Input format
There is one line of input, containing two space-separated strings S and P.

Output format
First-line should contain the number of such starting indices.

Next line should contain the indices in increasing order separated by a space.

Sample Input 1
aaba ab

Sample Output 1
2

1 2

Explanation 1
The anagrams of pattern "ab" are “ab” and “ba”. These are present at indices 1 and 2 of the input string “aaba”.

Sample Input 2
bacdgabcda abcd

Sample Output 2
3

0 5 6

Explanation 2
The anagrams of "abcd" can be seen as “bacd” at index 0, “abcd” at index 5 and “bcda” at index 6.


*/


vector<int> findAnagrams(string s, string p)
{   

   vector<int> res;
   int sLen=s.size();
   int pLen=p.size();
   if(pLen>sLen)return res;

   unordered_map<char,int> pCount,sCount;
   for(char c:p)pCount[c]++;
   for(int i=0;i<pLen;i++)sCount[s[i]]++;//1st window
   if(sCount==pCount)res.push_back(0);

   for(int i=pLen;i<sLen;i++){
	   sCount[s[i]]++;
	   sCount[s[i-pLen]]--;

	   if(sCount[s[i-pLen]]==0)sCount.erase(s[i-pLen]);

	   if(sCount==pCount)res.push_back(i-pLen+1);// answer in 1 based indexing so +1
   }
    return res;
   

}
