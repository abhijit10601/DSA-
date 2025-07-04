 /*Description
Given only the head of a linked list, check whether the linked list contains a cycle or not. If the linked list does not contain a cycle, return false, otherwise remove the cycle and return true.

Assume that cycle doesn't start on the head node.

Assume 0-based indexing.

Input format
First line contains an integer N - Number of nodes in the linked list.

Second line contains N integers representing the linked list.

Third line contains one integer K - The index to which the tail connects to, i.e, the start of the cycle (-1 in case of no cycle).

Output format
Return true or false depending on whether the linked list contains cycle or not. If the answer is true modify the linked list and remove the cycle.

Sample Input 1
5

1 2 3 4 5

2

Sample Output 1
true

1 2 3 4 5

Explanation
Visualization:

image

After removing cycle: The figure above indicates a cycle starting from node 3 and ending at node 3, the link starting at 5 and ending at 3 is indicative of that. After removing the cycle the linked list will be of the form 1-->2-->3-->4-->5-->NULL.

Sample Input 2
4

2 3 4 2

-1

Sample Output 2
false

Explanation
As there is no cycle we do not need to modify the linked list.

Visualization: 2-->3-->4-->2-->NULL

Constraints
1 <= N <= 10^5

-10^9 <= Value of node <= 10^9

-1 <= K <= N-1*/

bool detectAndRemoveCycle(ListNode* head){
   unordered_set<ListNode*> s;
   ListNode* temp=head;
   while(temp){
       if(s.find(temp->next)!=s.end()){temp->next=NULL;return true;}
       s.insert(temp);
       //cout<<temp->val<<" ";
       temp=temp->next;
   }
   return false;
}
