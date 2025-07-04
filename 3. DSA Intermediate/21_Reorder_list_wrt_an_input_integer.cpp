/*

Problem Description
Given a linked list and an integer X, partition the LL around X, such that all nodes less than X come before all nodes greater than X. If X is contained within the list, then those nodes need

to be after the elements less than X and before the elements greater than X, i.e. they should appear between the left and right partitions.


You can also see if you can preserve the order for elements on either side of the partition. For instance, for given LL 2, 6, 5, 7, 1 and X = 5, the answer should be 2, 1, 5, 6, 7 only, instead of 1, 2, 5, 6, 7.

Input format
N - An integer denoting the number of nodes in the linked list.

N integers follow where ith integer denotes the ith node value in the linked list

X - An integer denoting the value that you must use to partition the given list

Output format
Return the head after partitioning the list

Constraints
1 <= N <= 10^5

-10^9 <= value, X <= 10^9

Sample Input 1
7

3 5 8 5 10 2 1

5

Sample Output 1
3 2 1 5 5 8 10

Explanation 1
The nodes [3], [1] and [2] are less than [5] so they are present before [8] and [10].

There are also other possible answers for the same input.

Sample Input 2
5

3 1 3 1 4

2

Sample Output 2
1 1 3 3 4

Explanation 2
All nodes with values less than 2 come before all nodes with values greater than 2.
*/


ListNode* partition(ListNode* head , int x) {
    ListNode* lessHead=new ListNode(-1);
    ListNode* equalHead=new ListNode(-1);
    ListNode* greaterHead=new ListNode(-1);

    ListNode* less=lessHead;
    ListNode* equal=equalHead;
    ListNode* greater=greaterHead;

    ListNode* curr=head;
    while(curr!=NULL){
        if(curr->val<x){
            less->next=curr;
            less=less->next;
          //  less=curr; same thing
        }
        else  if(curr->val==x){
            equal->next=curr;
            equal=equal->next;
        }
        else{
            greater->next=curr;
            greater=greater->next;
        }

        curr=curr->next;
    }

    greater->next=NULL;
    equal->next=greaterHead->next;
    less->next=equalHead->next;

    return lessHead->next;
}
