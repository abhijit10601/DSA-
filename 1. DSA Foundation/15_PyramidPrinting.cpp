/*
Problem Description
Given a number n, you have to print a triangle-shaped pattern with n rows using space separated '*'.

For eg. if n = 4 pattern will be:

*
**
***
****


image

You will have to return an array of strings, with each element of the array representing one row of the pattern.

Input format
There is one line of input, containing an integer n, the number of rows.

Output format
Print the pattern as described.
*/
vector<string> patternPrintingI(int n)
{   vector<string> v;
    for(int i=0;i<n;i++ ){
        string str="";
    for(int j=0;j<=i;j++){
        str+="* ";
    }
    v.push_back(str);
}
return v;
}
