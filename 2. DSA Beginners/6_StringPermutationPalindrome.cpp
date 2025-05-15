/*
Problem Description
Given a string S which consists of both lowercase and uppercase alphabetical letters, you have to write a function to check if string S is a permutation of a palindrome or not. Note: Characters are case sensitive i.e. ‘a’ is not the same as ‘A’.

Input format
First line contains an integer representing the value of T, the number of test cases.

In next T lines each line contains the string S.

Output format
For each test case, print "True"(without quotes) if it is a permutation of a palindrome and "False" otherwise.

Constraints
1 <= T <= 10

1 <= length(S) <= 100000

Sample Input 1
3

nnaamm

hello

Aab

Sample Output 1
True

False

False

Explanation 1
nnaamm is a permutation of namman, which is a palindrome

hello is not a permutation of any palindrome

Aab is not a permutation of any palindrome
*/
//METHOD 1
bool isPalindrome(string s1){
	/*string s2=s1;
	reverse(s2.begin(),s2.end());
	return s1==s2;*/
	int l=0,r=s1.size()-1;
	while(l<=r){
		if(s1[l]!=s1[r])return false;
		l++;r--;
	}
	return true;
}

bool isPermutationPalindrome(string &s) {
  /*  METHOD 1
  
  sort(s.begin(),s.end());

	do{
        if(isPalindrome(s))return true;
	}while(next_permutation(s.begin(),s.end()));

    return false;*/


//here permutation = anagram

	unordered_map<char,int> mpp;
	for(auto it:s)mpp[it]++;
    int sum=0;
	for(auto &it:mpp){
		it.second=it.second%2;
        sum+=it.second;
	}
    //cout<<sum;
	if(sum==0|| sum==1)return true;

	return false;

}
