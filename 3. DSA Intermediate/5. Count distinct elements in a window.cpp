/*
Problem Description
Given an array of N elements and an integer B, you have to find the count of distinct numbers in all windows of size B.

You have to return an array of size N-B+1 where i'th element in the array is the number of distinct elements in sequence Ai, Ai+1 ,..., Ai+B-1. If B > N, return an empty array.

Input format
There are 2 lines of input

First line contains two space separated integers N and B.

Second line contains N space separated integers representing the array A.

Output format
Return the array space separated in the first line.

Function definition
You have to implement the given function. It accepts three arguments - n, b and the input array. You have to return the new array as described.

Sample Input 1
6 3

1 2 1 3 4 3

Sample Output 1
2 3 3 2

Explanation
First range will be [1,2,1] , in which number of distinct elements are 2

Second range will be [2,1,3], in which number of distinct elements are 3

Third range will be [1,3,4], in which number of distinct elements are 3

Fourth range will be [3,4,3], in which number of distinct elements are 2

Constraints
1<=N<=100000

1<=B<=100000

1<=Ai<=10000

Resource
*/

vector<int> countDistinctElements(int n, int b, vector<int> a){
    
    /*// BRUTE FORCE USING set and loop t.c.=O(n*b) 
    vector<int> res;

    for(int i=0;i<=n-b;i++){
        unordered_set<int> s;
        for(int j=i;j<i+b;j++)s.insert(a[j]);
        res.push_back(s.size());
    }
    return res;*/

    
    //if(n>b)
    vector<int> res;
    unordered_map<int,int> freq;
    if(b<=n){
    //store 1st window
    for(int i=0;i<b;i++)freq[a[i]]++;
    res.push_back(freq.size());// add only if b<n

    for(int i=1;i<n-b+1;i++){
        freq[a[i+b-1]]++;//remove from left
        freq[a[i-1]]--;// add from back

        if(freq[a[i-1]]==0){// check for left part window
            freq.erase(a[i-1]);
            }
        res.push_back(freq.size());
    }}
    return res;// ifb>n return empty vector<int> res
}

