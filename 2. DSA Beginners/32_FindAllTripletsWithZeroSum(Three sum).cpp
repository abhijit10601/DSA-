/*

Given an array *nums*, find all unique triplets (group of 3 numbers) such that their sum is 0. There should be no duplicates i.e. no triplet should be repeated.

Input format
The first line consists of an integer, N, denoting the size of the array.

The second line consists of N space separated integers which denote the elements of the array, nums.

Output format
You must return all such unique triplets which sum to 0 from the given array.

Constraints
0 <= N <= 10^3

0 <= | nums[i] | <= 10^6, where nums[i] represents the value of each element in the array

Sample Input 1
6

-1 0 1 2 -1 -4

Sample Output 1
-1 0 1

-1 -1 2

Explanation 1
These 2 triplets sum to 0 and there are no other such unique combinations. Note that the combination [-1 , 0, 1] can be created twice but is not repeated since we are only displaying unique combinations.

Sample Input 2
7

-3 0 1 2 -1 1 -2

Sample Output 2
-3 1 2

-2 0 2

-2 1 1

-1 0 1

Explanation 2
These are the 4 triplets that sum to 0 and there are no other such unique combinations.
*/

    vector<vector<int>> threeSum(vector<int>& arr) {
       /* BRUTE FORCE TLE
       vector<vector<int> > ans;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(arr[i]+arr[j]+arr[k]==0){
                        ans.push_back({arr[i],arr[j],arr[k]});
                    }
                }
            }
        }
        set<vector<int>> s(ans.begin(),ans.end());
        vector<vector<int>> ANS(s.begin(),s.end());
        return ANS;*/

        // EFFICIENT - ThreeSum Problem
        vector<vector<int>> ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());

        for(int i=0;i<n-2;i++){
            //skip duplicates
            if(i>0 && arr[i]==arr[i-1])continue;

            int left=i+1,right=n-1;
            while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum==0){
                ans.push_back({arr[i],arr[left],arr[right]});
                while(left<right && arr[left]==arr[left+1])left++;//skip dup
                while(left<right && arr[right]==arr[right-1])right--;//skip dup
                
                left++;right--;
            }    
            else if(sum<0)left++;
            else right--;//sum>0
            }
        }
        return ans;
    }
