/*
Problem Description
You are given a list of marks over 5 subjects scored by n students. You need to sort the student by following rules.

The student whose sum of marks will be highest must come at the top of the leaderboard.

Students whose total sum of marks are the same will be sorted alphabetically ascending by name.

In all other cases, student with lesser id will come before in the leaderboard

Input format
First line will contain a single integer n number of students.

Next n lines will contain space separated unique integer Id, string S name of the student followed by 5 integers marks scored out of 100.

Output format
Print space separated list of sorted ids of the student in a single line

Sample Input 1
3

1 Alan 45 56 21 32 74

2 Fabien 95 94 93 92 91

3 Gamora 85 65 54 65 76

Sample Output 1
2 3 1

Explanation 1
Fabien has the most marks obtained and then Gamora and followed by Alan

Constraints
*/

struct Student{
    string name;
    vector<int> marks;
    int id;
    int totalMarks(){
        return accumulate(marks.begin(),marks.end(),0);
    }
};
/*  METHOD 1 - missed 3rd sorting condition by this approach
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first){
        return a.second<b.second;//when  sum is equal sort by id asc
    }
    return a.first>b.first;
}*/


bool cmp(Student &a , Student &b){
    // condition 1
    if(a.totalMarks()!=b.totalMarks()){
        return a.totalMarks()>b.totalMarks();
    }
    // condition 2
    if(a.name!=b.name){
        return a.name<b.name;
    }
    // condition 3
    return a.id<b.id;
}

vector<int> marksSort(int n, vector<Student> students){
   /* Method 1  
  vector<pair<int,int>> ans;
    for(auto it: students){
        int sum=0;
        for(auto m:it.marks){
            sum+=m;
        }
        ans.push_back({sum,it.id});
    }

    sort(ans.begin(),ans.end(),cmp);
    vector<int> ansID;
    for(auto it:ans){
        ansID.push_back(it.second);

    }
    return ansID;*/
    vector<int> ans;
    sort(students.begin(),students.end(),cmp);
    for(auto s:students)ans.push_back(s.id);
    return ans;
    
}
