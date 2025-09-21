/*
Problem Description
Given a list of meeting time intervals, you have to find the minimum number of rooms required to organize all the meetings.

Input format
First line contains an integer N, indicating the number of meetings.

Next N lines contain two space separated integers S and E, indicating the Starting and Ending time of a meeting, respectively.

Output format
Print the minimum number of rooms required.

Constraints
N <= 100000

0 <= S,E <= 1000000000 (10^9)

Si < Ei

Sample Input 1
3

0 20

5 10

10 15

Sample Output 1
2

Explanation 1
One room can host the 1st meeting (0-20) and the other room can host both the 2nd meeting (5-10) and 3rd meeting (10-15), one after the other.

So, only 2 rooms are required if total for the 3 meetings.
*/

int meetingRooms(int n, vector<vector<int>>& time){
    if(n==0)return 0;

    //sort based on start time
    sort(time.begin(),time.end());
   priority_queue<int,vector<int>,greater<int>> minHeap;//to track end time of meeting
   for(const auto& meeting:time){
       if(!minHeap.empty() && minHeap.top()<=meeting[0])minHeap.pop();

       minHeap.push(meeting[1]);
   }
return minHeap.size();

}



//OPTIMAL
int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int count=0;
        int lastFinish=-1;
        vector<pair<int,int>> meeting;
        int n=start.size();
        for(int i=0;i<n;i++){ //n
            meeting.push_back({end[i],start[i]});
        }
        sort(meeting.begin(),meeting.end());  // nlogn
        
        for(int i=0;i<n;i++){
            if(meeting[i].second>lastFinish){ // curr start time > last finish time
            count++;
            lastFinish=meeting[i].first; // curr finish/end time
                
            }
        }
        return count;
    }
