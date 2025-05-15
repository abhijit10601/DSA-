/*
Problem Description
Given two strings s and t, write a function to determine if t is an anagram of s.

Note: You may assume the string contains only lowercase alphabets.

Note:-
There's a test case where both the strings are empty but the js compiler is treating one as empty and other as undefined. So, update the readline function accordingly.

Input format
You will be given two strings in two separate lines.

Output format
Print "true" if both the strings are anagram otherwise “false”.

Constraints
Length of string <= 100000

Sample Input 1
anagram

nagaram

Sample Output 1
true

Sample Input 2
rat

car

Sample Output 2
false
*/
       bool validAnagram(string s, string t) {
            int freq[26]={0};

            for(auto it :s)freq[it-'a']++;
            for(auto it :t)freq[it-'a']--;

            for(auto it:freq){
                if(it!=0)return false;
            }

            return true;
        }
