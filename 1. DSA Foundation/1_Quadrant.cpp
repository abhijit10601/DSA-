/*
  Problem Description
Given coordinates of a point (x,y) in 2D plane, find in which quadrant does this point lie.

Note: The problem provides floating point numbers as inputs.

Input format
First line contains 2 space separated real numbers - x coordinate, y coordinate.

Output format
Print 1, 2, 3 or 4 depending on in which quadrant does the point lie.

Sample Input 1
-5.5 2

Sample Output 1
2

Explanation 1
The x-coordinate is negative and the y-coordinate is positive which means the point lies in the 2nd quadrant.

Sample Input 2
1 -1

Sample Output 2
4

Explanation 2
The x-coordinate is positive and the y-coordinate is negative which means the point lies in the 4th quadrant.

Constraints
-100 < x, y < 100

Neither x nor y is 0.

Crio Methodology - Problem Approach
Brainstorm some approaches for solving the problem before viewing the video
*/

#include <bits/stdc++.h>
using namespace std;

// TODO: Implement this method
int findQuadrant(float x, float y){
      if(x>0.0 && y>0.0)return 1;
      else if(x>0.0 && y<0.0)return 4;
      else if(x<0.0 && y<0.0)return 3;
      else return 2;

      //edge case - (0,0) origin not handled here 

}

// NOTE: Please do not modify this function
int main(){
    float x, y;
    cin >> x >> y;
    assert(x != 0 && y != 0);
    int result = findQuadrant(x, y);
    cout << result;
}
