/*
Problem Description
You’re given two numbers represented by two linked lists, where each node contains a single digit. The digits are stored in forward order i.e the one’s digit is at the tail of the list. Write a function that adds the two numbers and returns the sum as a linked list in the same order.

Input format
There are 4 lines of input.

First line contains N, the size of the first list

Next line contains N space separated integers

Third line contains M, the size of the second list

Next line contains M space separated integers

Output format
Return the resultant list after adding given lists.

Function definition
The given function accepts two arguments - representing the heads of the two lists,and returns the new head.

Constraints
1 <= N <= 1e5

1 <= M <= 1e5

0 <= value <= 9

Sample Input 1
3

6 1 7

3

2 9 5

Sample Output 1
9 1 2

Explanation 1
617 + 295 = 912.

Sample Input 2
2

4 9

1

5

Sample Output 2
5 4

Explanation 2
49 + 5 = 54.
*/

ListNode* reverseList(ListNode* head){
    ListNode*curr=head;
    ListNode* prev=nullptr;
    while(curr!=nullptr){
        ListNode* nextTemp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextTemp;
    }
    return prev;
}
ListNode* sumLists2(ListNode* head1 , ListNode* head2) {
    head1=reverseList(head1);
    head2=reverseList(head2);
    
    ListNode* dummy=new ListNode(0);
    ListNode* current=dummy;
    int carry=0;

    while(head1!=nullptr || head2!=nullptr || carry>0){
        int sum=carry;
        if(head1!=nullptr){
            sum+=head1->val;
            head1=head1->next;
        }
         if(head2!=nullptr){
            sum+=head2->val;
            head2=head2->next;
        }

        carry=sum/10;
        current->next=new ListNode(sum%10);
        current=current->next;
    }
    return reverseList(dummy->next);
}
