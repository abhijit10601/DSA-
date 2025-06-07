/*
Given an array of non negative integers, arrange the elements, such that if made into a number, they form the largest number.

For instance,

Given the array [1, 3, 10] , this should be arranged to [3, 1, 10] - since the largest possible number formed by these numbers is 3110.

Input format
There are 2 lines of input

First-line contains n, the size of the array.

Next line contains n space-separated integers.

Output format
Print the largest number formed by arranging these numbers in the list.

Sample Input 1
2

10 2

Sample Output 1
210

Sample Input 2
5

3 30 34 5 9

Sample Output 2
9534330

Constraints
0<= n <=50000
*/


     static bool cmp(string s1,string s2){
           return (s1+s2)>(s2+s1);
     }

    string largestNumber(vector<int>& nums) {
          vector<string> num;
          for(auto it:nums)num.push_back(to_string(it));

          sort(num.begin(),num.end(),cmp);
          if(num[0]=="0")return "0";

          string res="";
          for(string n:num)res+=n;
          return res;
    }
