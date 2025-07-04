/*
Problem Description
Given a linked list, remove the Kth node from the end of the list and return its head.

Note: the given K will always be a valid node.

Input format
There are three lines of input

First line contains N, the number of nodes in the linked list

Second line contains N integers, denoting the values of the linked list

Third line contains K, the node to be deleted from the end.

Output format
Return the head of the LL after deleting the Kth node from the end.

Function definition
You have to complete the given function. It accepts two arguments - the head of the linked list, and k. You have to return the head of the LL after making the necessary change.

Constraints
1 <= N<= 10^5

-10^9 <= value <= 10^9

1 <= K <= N

Sample Input 1
5

1 5 2 4 3

2

Sample Output 1
1 5 2 3

Explanation 1
The 2nd node from the end is 4, removing which, gives us 1 5 2 3

Sample Input 2
5

3 1 3 2 4

4

Sample Output 2
3 3 2 4
*/

ListNode* deleteKthToLast(ListNode* head , int k) {
    
    if(head==NULL)return head;

    /*if(k==1){
        ListNode* temp=head;
        head=head->next;
        delete temp;
        return head;
    }*/

    ListNode* slow=head;
    ListNode* fast=head;
    for(int i=0;i<k;i++){
        fast=fast->next;
    }
    if(fast==NULL)return head->next;

    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }

//ListNode* node=slow->next;
    slow->next=slow->next->next;
 //   delete node;

    return head;
     
}
