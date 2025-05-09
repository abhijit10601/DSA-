/*
 Problem Description
Given an array of n strings, sort the array in lexicographical order.

Lexicographical order is the order in which words appear in a dictionary.

Input format
There are two lines of input.

First line contains integer n.

Next line contains n space separated strings.

Output format
Print the sorted array.

Sample Input 1
4

abc abd ab a

Sample Output 1
a ab abc abd

Constraints
1 <= n <= 10000

Strings contain only lowercase english alphabet.

Each string will have length no more than 15.
*/

vector<string> sortArray(vector<string> vec,int n){
    sort(vec.begin(),vec.end()); // intro sort
    return vec;
}

// bubble, insertion, selection, quick, merge sort
