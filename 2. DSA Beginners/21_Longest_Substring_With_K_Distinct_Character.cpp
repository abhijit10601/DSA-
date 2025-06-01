/*
Problem Description
Given a string, find the length of the longest substring that contains at most K distinct characters.

Note:

Uppercase and Lowercase characters should be considered as different characters.

There can be numbers and special characters as well.

Input format
There are 2 lines of input.

First-line contains two space-separated integers representing the value of N and K.

The next line contains the string S of length N.

Output format
The length of the longest substring T that contains at most K distinct characters.

Constraints
1 <= N <= 10^5

0 <= K <= 256

Sample Input 1
5 3

abacd

Sample Output 1
4

Explanation 1
The longest substring that has 3 distinct characters, "abac", is of length 4.

Sample Input 2
6 3

Xyyzya

Sample Output 2
5
*/


int lengthOfLongestSubstringKDistinct(string s, int k) {
	unordered_map<char,int> charCount;
	int left=0;
	int maxLen=0;
//SLIDING WINDOW
	for(int right=0;right<s.size();right++){
		charCount[s[right]]++;

		while(charCount.size()>k){
			charCount[s[left]]--;
			if(charCount[s[left]]==0)charCount.erase(s[left]);
			left++;
		}

		maxLen=max(maxLen,right-left+1);
	}
	return maxLen;
}
