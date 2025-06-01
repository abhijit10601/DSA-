/*
Problem Description
Given a string, find the length of the longest substring which has no repeating characters.

Input format
Input is a string.

Output format
Output is an integer representing the longest substring with no repeating characters.

Sample Input 1
aabcccbcb

Sample Output 1
3

Explanation 1
"abc" is the longest substring with no repeating characters.

Sample Input 2
cdddddd

Sample Output 2
2

Explanation 2
"cd" is the longest substring with no repeating characters
*/

 int lengthOfLongestSubstring(string s) {
    
    /* Time Complexity- O(N^2) Space Complexity- O(N)
     int maxi=0;
     for(int i=0;i<s.size();i++){
         set<int> Set;
        for(int j=i;j<s.size();j++){
           if(Set.find(s[j])==Set.end()){
               Set.insert(s[j]);
               maxi=(max(maxi,j-i+1));
           }
           else{
               break;
           }
        }
     }
     return maxi;*/

    // SLIDING WINDOW
    unordered_set<char> Set;
    int left=0;
    int maxi=0;

    for(int right=0;right<s.size();right++){
        //if character already in set, remove character
        while(Set.find(s[right])!=Set.end()){
            Set.erase(s[left]);
            left++;
        }
        // add current character to the set and update the maxi
        Set.insert(s[right]);
        maxi=max(maxi,right-left+1);
    }
    return maxi;

    }
