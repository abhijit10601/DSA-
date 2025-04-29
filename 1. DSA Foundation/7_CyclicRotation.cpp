/*
Problem Description
Given an array of n integers and an integer k, rotate the array k times in clockwise order.

Input format
There are three lines of input.

First line contains integer n.

Next line contains n space separated integers.

Next line contains the value of k.

Output format
Print the rotated array.

Sample Input 1
5

1 2 3 4 5

2

Sample Output 1
4 5 1 2 3

Explanation 1
After first rotation array will be 5 1 2 3 4

After second rotation array will be 4 5 1 2 3

Constraints
1 <= n <= 100000

1 <= element of array <= 100000

0 <= k <= 100000
*/

// right rotate 

void rev(vector<int>& arr,int i,int j){
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
}

vector<int> cyclicRotation(vector<int> vec,int n, int k){

     k=k%n;

     rev(vec,0,n-k-1);
     rev(vec,n-k,n-1);
     rev(vec,0,n-1);


    // reverse(vec.begin()+n-k,vec.end());

    // reverse(vec.begin(),vec.begin()+n-k);


    // reverse(vec.begin(),vec.end());
    return vec;

}



/*   LEFT Rotate
     rev(vec,0,k-1);
     rev(vec,k,n-1);
     rev(vec,0,n-1);
*/
