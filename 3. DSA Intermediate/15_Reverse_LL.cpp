/*
Problem Description
Given the elements of a linked list, reverse it.


You’ll have to implement the given method, which has the original list’s head pointer as an argument, and return the head of the updated list.

Input format
There are two lines of input.

First line contains N, the number of elements in the linked list.

Second line contains N space separated integers.

Output format
Only line contains N space separated integers

Sample Input 1
5

1 2 3 4 5

Sample Output 1
5 4 3 2 1

Explanation 1
1->2->3->4->5->NULL

5->4->3->2->1->NULL

Constraints
0 <= N <= 10^5

-10^9 <= A[i] <= 10^9

Crio Methodology - Problem Approach
Brainstorm some approaches
*/

ListNode* reverseLinkedList(ListNode *head) {
    if(head==NULL||head->next==NULL)return head;
    
    ListNode* temp=head;
    ListNode* prev=NULL;

    while(temp!=NULL){
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;//moving temp head in forward dir

    }

    return prev;

}
