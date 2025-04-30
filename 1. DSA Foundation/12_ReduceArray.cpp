/*
 Problem Description
There is an array of N elements. Perform the following operation until there are one or no elements left in the array :

Remove the largest and second largest element from the array and insert their absolute difference back in the array.

Input format
There are two lines of input.

First line contains N, the number of elements.

Second line contains N space separated integers.

Output format
Print the last element left in the array.

Sample Input 1
5

2 1 11 13 7

Sample Output 1
2

Constraints
1 <= N <= 10^5

1 <= A[i] <= 10^9
*/

int reduceArray(vector<int> arr){
  //  sort(arr.begin(),arr.end());
  priority_queue<int> pq;

  for(auto &it :arr)pq.push(it);
  
  //if 1 element keep the edge case uunder consideration
  if(pq.size()==1)return pq.top();

  while(!pq.empty()){
    int el1=pq.top();pq.pop();
    int el2=pq.top();pq.pop();

    pq.push(el1-el2);
    if(pq.size()==1){
      return pq.top();
    }


  }

}
