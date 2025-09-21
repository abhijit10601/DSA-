/*
Problem Description
Given a positive integer n, find the smallest integer which has exactly the same digits existing in the integer n and is greater in value than n. If no such positive integer exists, return -1.

Input format
A 32 bit integer N

Output format
A single integer

Sample Input 1
12

Sample Output 1
21

Explanation
There is only one number greater than 12 which is composed of 2 and 1 and it is 21.

Constraints
0<= N <= 10^9
*/


int nextGreaterElementWithSameSetOfDigits(int n){
     /*  INBUILT FUNCTION
      string s=to_string(n);
      next_permutation(s.begin(),s.end());
      return stoi(s);*/
      

      // approach - find next permutation // in cases like 54321 next is 12345 return -1 
      string num=to_string(n);
      int len=num.length();

      //find dip
      int pivot=-1;
      for(int i=len-2;i>=0;i--){
            if(num[i]<num[i+1]){
                  pivot=i;
                  break;
            }
      }

      if(pivot==-1)return -1;// cases like 54321
      
      int sucessor=-1;
      for(int i=len-1;i>pivot;i--){
            if(num[i]>num[pivot]){
                  sucessor=i;
                  break;
            }
      }

      swap(num[pivot],num[sucessor]);
      reverse(num.begin()+pivot+1,num.end());

      return stoi(num);
}
