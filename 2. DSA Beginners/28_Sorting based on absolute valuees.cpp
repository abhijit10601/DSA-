/*
Problem Description
Given an array of integers, sort the array based on the absolute value of the elements.

Input format
First line contains an integer n - The number of elements.

Second line contains n space separated integers - The array nums.

Output format
For each test case print the minimum changes required on a separate line.

Sample Input 1
5

2 -5 1 -2 4

Sample Output 1
1 2 -2 4 -5

Explanation 1
Absolute values of elements are [2,5,1,2,4] respectively, so in the sorted order based on absolute values elements will be [1,2,-2,4,-5] or [1,-2,2,4,-5]. Both are accepted answers.

Constraints
1 <= n <= 10^5

-10^9 <= nums[i] <= 10^9
*/

bool cmp(int a,int b){
    return abs(a)<abs(b);
}
vector<int> sortArrayAbsolute(int n, vector<int>& nums){
   /* vector<int> ans(n);
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++)p.push_back({abs(nums[i]),nums[i]});
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++)ans[i]=p[i].second;
    return ans;*/

    vector<int> ans=nums;
    sort(ans.begin(),ans.end(),cmp);//functional pointer
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> result = sortArrayAbsolute(n, nums);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
}
