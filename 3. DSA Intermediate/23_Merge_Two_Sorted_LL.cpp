/*
Problem Description
Given 2 sorted linked lists, merge them into a new sorted linked list and return head of the merged list. The new list should be made by splicing (adjusting the pointers) together the nodes of the first two lists.

Input format
N - An integer denoting the number of nodes in the linked list.

N integers follow where ith integer denotes the ith node value in the linked list

M - An integer denoting the number of nodes in the linked list.

M integers follow where jth integer denotes the jth node value in the linked list

Output format
Return the sorted list after splicing the nodes of the first two lists.

Constraints
0 <= N <= 10^5

-10^9 <= value <= 10^9

0 <= M <= 10^5

-10^9 <= value <= 10^9

Sample Input 1
3

1 2 4

3

1 3 4

Sample Output 1
1 1 2 3 4 4

Explanation 1
Merging the input lists and keeping the new list sorted results in this.

Sample Input 2
4

1 5 6 7

1

3

Sample Output 2
1 3 5 6 7

Explanation 2
Merging the input lists and keeping the new list sorted results in this.
*/

ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
    ListNode* dummy=new ListNode(-1);
    ListNode* curr=dummy;

    while(head1!=nullptr && head2!=nullptr){
        if(head1->val<=head2->val){
            curr->next=head1;
            curr=curr->next;
            head1=head1->next;
        }
        else{
            curr->next=head2;
            curr=curr->next;
            head2=head2->next;
        }

        
    }
    if(head1!=nullptr)curr->next=head1;
    else curr->next=head2;

    return dummy->next;
}
