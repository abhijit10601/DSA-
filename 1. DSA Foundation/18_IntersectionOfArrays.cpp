/*
 Problem Description
Given two arrays A and B, write a function to compute their intersection.

Note: Each element in the result should appear as many times as it shows in both arrays. The result needs to be in sorted order.

Input format

First line contains one integer N denoting the number of elements in array A

Next line contains N integers denoting the elements of array A

Next line contains one integer M denoting the number of elements in array B

Next line contains M integers denoting the elements of array B

Output format
Single line containing the intersection elements of the two arrays in sorted order.

Sample Input 1

4

1 2 2 1

2

2 2

Sample Output 1
2 2

Explanation
Since 2 2 are the only elements present in both the arrays.

Constraints

1<=N,M<=10^5

-10^9<=Ai,Bi<=10^9
*/

vector<int> intersectionOfTwoArrays( int n , vector<int> &arr1 , int m, vector<int> & arr2) {
    //since unique intersection not needed do wont be using set
    vector<int> v;
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
    int i=0,j=0;
	while(i<n && j<m){
		if(arr1[i]>arr2[j])j++;
		else if(arr1[i]<arr2[j])i++;
		else{//when equal
			v.push_back(arr1[i]);i++;j++;
		}
	}
	return v;
       
	   
}
