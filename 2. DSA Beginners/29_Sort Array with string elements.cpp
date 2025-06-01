/*
Problem Description
Given an array, where integers are written as strings, sort the array and return it, with the elements still being strings.

Note that the number of digits in each element may go up to 10^6.

Input format
There are 2 lines of input.

First line will contain a single integer n, the size of array.

Second line will contain n space separated integers.

Output format
Return n space separated integers in a single line

Sample Input 1
5

3 30 1 124 54644

Sample Output 1
1 3 30 124 54644

Constraints
1<=n<=2 x 10^5

1<=Number of digits in each string<=10^6

1<=Total Count of digits of all strings<=10^6

There’ll be no leading zeros in any of the strings
*/

bool cmp(string &a, string &b){
    if(a.length()!=b.length())return a.length()<b.length();

    return a<b;
}

vector<string> numSort(int n , vector<string >& numbers){
    /*
         WILL GIVE TLE OR EDGE CASE FOR BIG INPUT

    vector<int> num;
    for(auto it:numbers)num.push_back(stoi(it));
    sort(num.begin(),num.end());
    vector<string> ans;
    for(auto it:num)ans.push_back(to_string(it));
    return ans;*/

    sort(numbers.begin(),numbers.end(),cmp);//functional pointer
    return numbers;

}
