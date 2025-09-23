/*
Problem Description
Given an array, print the next smaller element for every element. The next smaller element for an element x is the first smaller element on the right side of x in the array. Elements for which no next smaller element exists, consider it as -1.

Input format
First line contains an integer N - The size of the array.

Second line contains N space separated integers - The given array.

Output format
Print in a single line, the next smaller element for each array element separated by space.

Sample Input 1
5

8 2 5 10 4

Sample Output 1
2 -1 4 4 -1

Explanation
In the given array, next smaller element to 8 is 2 and for 5 & 10 it is 4. For 2 and 4 the next smaller element does not exist so the final ans is [2, -1, 4, 4, -1].

Constraints
1 <= N <= 10^5

0 <= A[i] <= 10^9
*/


vector<int> nextSmallerElement(vector<int> A){
  /*  vector<int> ans(A.size(),-1);
     for(int i=0;i<A.size()-1;i++){
         //int nse=-1;
         for(int j=i+1;j<A.size();j++){
           if(A[j]<A[i]){ans[i]=A[j];break;}
         }
     }
    return ans;*/
/*
    int n=A.size();
    vector<int> res(n,-1);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&A[i]<A[st.top()]){
            res[st.top()]=A[i];
            st.pop();
        }
        st.push(i);
    }
    return res;*/

    int n=A.size();
    vector<int> ans(n,-1);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()  &&  A[i]<=st.top())st.pop();

        //if(st.empty())ans[i]=-1;
        //else ans[i]=st.top();

        if(!st.empty())ans[i]=st.top();

        st.push(A[i]);
    }
    return ans;

}
