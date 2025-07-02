/*
Problem Description
You are given a list of words present in a book. Your younger brother is really curious to know the K most frequent words in the book, you have to find them.


Your answer should be sorted by frequency from highest to lowest. If two words have the same frequency, then the word with the lower alphabetical order should come first.

Input format
There are three lines of input

The first line contains N, which is the number of input strings.

The second line contains N space separated input strings (S).

The third line contains the value of K.

Output format
Print the K most frequent words present inside the book, each in a new line. If two words have the same frequency, then the word with the lower alphabetical order should come first.

Constraints
1 <= N <= 1000

1 <= Length(S) <= 100000

'a' <= S[i] <= 'z'

1 <= K <= Number of Unique Strings

Sample Input 1
1

bus

1

Sample Output 1
bus

Explanation 1
In the given input, the frequency of "bus" is 1 and it is the 1st most frequent word.

Sample Input 2
3

car bus car

2

Sample Output 2
car

bus

Explanation 2
In the given input, the frequency of "car" is 2, frequency of “bus” is 1.

Since K = 2, both words are printed, with "car" being the most frequent, gets printed first.

Resource
*/

vector<string> frequentWords(vector<string>& words , int k) {
	unordered_map<string,int> freq;
	for(auto it:words)freq[it]++;

	vector<pair<string,int>> freqV(freq.begin(),freq.end());
	sort(freqV.begin(),freqV.end(),[](const pair<string,int> &a ,const pair<string,int> &b){
      if(a.second==b.second)return a.first<b.first;//alphabetic order when freq is same
	  return a.second>b.second;//freq order
	});

	vector<string> res;
	for(int i=0;i<k && i<freqV.size();i++)res.push_back(freqV[i].first);// store top k words
	return res;
}
