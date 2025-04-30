/*
 Problem Description
Postfix expressions are an ordering of mathematical operations, where the operator(+,-,* etc) comes after the operands.

For instance, an operation 2 + 3 (infix notation, which humans use) will be represented as 2 3 + in postfix notation. The computers can understand postfix notation.

Your job is to evaluate the given postfix expression. The expression is given as a string where each token is separated by a space.

The possible operators can be +, - and *

Note that all operands(numbers) are assumed to be non-negative.

Input format
One line of input, containing the string S.

Output format
Print the result of the given expression

Sample Input 1
2 3 +

Sample Output 1
5

Explanation 1
3 + 2 = 5

Sample Input 2
2 3 1 * + 9 -

Sample Output 2
-4

Explanation 2
If the expression is converted into an infix expression, it will be 2 + (3 * 1) – 9 = 5 – 9 = -4.

Constraints
1 <= |S| <= 100

S[i] >= 0, where S[i] is an operand in the expression
*/


int operation(int op1,int op2,char op){
      switch(op){
            case '+' :
                 return op1+op2;
            case '-' :
                 return op1-op2;     
            case '*' :
                 return op1*op2;
            default:
                 return 0;     
      }
}

int postfixExpression(string s)//POSTFIX TO INFIX
{ 
      stack<int> st;
      bool numberRead=false;
      int num=0;
      for(char c:s){
           

            if(isdigit(c)){
                 // st.push(c-'0');
                 num=num*10 + (c-'0');
                 numberRead=true;
            }
            else if( c==' ' && numberRead){
                  st.push(num);
                  num=0;
                  numberRead=false;
            }
            else if( c==' ' && !numberRead){
                  continue;
            }
            else{//operand 
                  int op2=st.top();st.pop();
                  int op1=st.top();st.pop();
                  
                  st.push(operation(op1,op2,c));
            }
            
      }
      return st.top();
}
