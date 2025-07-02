/*   //Implement Min stack


Problem Description
You are given to implement a stack which performs pushing, popping, and has a function findMin() which returns the minimum element present in the stack.

Push, pop and min should all operate in 0(1) time.


You will be given 3 types of queries. For each query you will be asked to perform suitable operations:

For query of type 1 x : push an element 'x' into the stack.

For query of type 2 : pop the last inserted element from the stack .

For query of type 3 : Find the minimum element from the stack. If the stack is empty, print -1.

Input format
First line contains an integer N denoting the number of queries.

For each query of type 1 there will be two integers 1 and x and for type 2 and 3 only single integers 2 or 3.

Output format
For each query of type 3. Print the minimum element in a new line.

Sample Input 1
6

1 2

1 3

1 1

3

2

3

Sample Output 1
1

2

Explanation 1
When we get to the query of type 3, the stack contains values 2, 3 and 1 (which were inserted with three queries of type 1 at the beginning) so the min element is 1. For the next query of type 3, the previous min element with value 1 has been popped (with the query type 2), so the remaining min element is 2.

Constraints
1 <= N <= 10^5

0 <= A[i] <= 10^8 , 0<= i< N

Crio Methodology - Problem Approach
Brainstorm some approaches for solving the problem before viewing the video


*/


#include <bits/stdc++.h>
using namespace std;
//stack<int> S , minstack;
stack<pair<int,int>> st;
void push( int x) {
int mini;
if(st.empty()){
    mini=x;
}
else{
    mini=min(x,st.top().second);
}
st.push({x,mini});
}

void pop() {
 if(!st.empty()){
     st.pop();
 }
}

int findMin() {
    if(st.empty())return -1;
    return st.top().second;
}

int main()
{
    int n, m, t;
    cin >> t;
    while (t--) {
        int ch;
        cin >> ch;
        if ( ch  == 1) {
            cin >> n;
            push(n);
        }
        else if ( ch == 2)
            pop();
        else
            cout << findMin() << endl;
    }

}







/* 
Crio Methodology

Milestone 1: Understand the problem clearly
1. Ask questions & clarify the problem statement clearly.
2. Take an example or two to confirm your understanding of the input/output

Milestone 2: Finalize approach & execution plan
1. Understand what type of problem you are solving and see if you can recollect solving similar problems in the past
      a. Obvious logic (this would only test ability to convert logic to code)
      b. Figuring out logic
      c. Knowledge of specific algorithm, data structure or pattern
      d. Knowledge of specific domain or concepts
      e. Mapping real world into abstract concepts/data structures
2. Brainstorm multiple ways to solve the problem and pick one based on the TC/SC requirements
3. Get to a point where you can explain your approach to a 10 year old

Milestone 3 : Come up with an Instruction Manual for a 10 year old
1. Take a stab at the high-level logic & write it down like a detailed Instruction Manual for a 10 Year old where each line of the manual can be expanded into a logical line(s) of code.
2. Try to offload logic out of the main section as much as possible by delegating to functions.

Milestone 4: Code by expanding your 10 Year Olds "Instruction Manual
1. Run your code snippets at every logical step to test correctness (Helps avoid debugging larger pieces of code later)
2. Make sure you name the variables, functions clearly.
3. Use libraries as much as possible

Milestone 5: Prove that your code works using custom test cases
1. Make sure you check boundary conditions and other test cases you noted in Milestone 1
      a. If compiler is not available, dry run your code on a whiteboard or paper
2. Suggest optimizations if applicable during interviews
*/
