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


int calc(int A,int B,char c){
      if(c=='+')return A+B;
      else if(c=='-')return A-B;
      else if(c=='*')return A*B;
      else return 0;
}

int postfixExpression(string s){
 stack<int> st;
 stringstream ss(s);
 string token;

 while(ss>>token){
       if(isdigit(token[0]))st.push(stoi(token));
       else{
             int op2=st.top();st.pop();
             int op1=st.top();st.pop();

             switch(token[0]){
                   case'+':
                        st.push(op1+op2);
                        break;
                   case'-':
                        st.push(op1-op2);
                        break; 
                   case'*':
                        st.push(op1*op2);
                        break;      
                   default:
                        return 0;                      }
       }
 }
 return st.top();

}
/* // will handle single element and negative values
int calc(int op2,int op1,char c){
      if(c=='+')return op2+op1;

      else if(c=='-')return op2-op1;

      else if(c=='*')return op2*op1;

      else return 0;
}
// TODO: Implement this method
int postfixExpression(string s)
{stack<int> st;
 for(int i=0;i<s.size();i++){
      if(s[i]==' ')continue; //spaces

      else if(isdigit(s[i])){ //operator 
             if(s[i-1]!='-')st.push(s[i]-'0');//+ve num
             else st.push(-(s[i]-'0'));//-ve num
             
       }
       
       else{ //operator
             if(s[i]=='-' && isdigit(s[i+1]))continue;
             
       
             int op1=st.top();st.pop();
             int op2=st.top();st.pop();
             st.push(calc(op2,op1,s[i]));
       }
 }
 return st.top();
}*/
