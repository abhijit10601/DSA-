/*
Problem Description
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

Input format
First line contains an integer N - Number of nodes in the linked list.

Second line contains N integers representing the linked list.

Output format
Return the head of the reordered linked list.

Sample Input 1
5

1 5 3 4 8

Sample Output 1
1 3 8 5 4

Explanation
Arranging the odd nodes first i.e. 1st, 3rd, 5th node and then the even nodes i.e. 2nd, 4th will give us 1, 3, 8, 5, 4.

Constraints
0 <= N <= 10^5

-10^9 <= Value of node <= 10^9
*/


ListNode* oddEvenLinkedList(ListNode* head){

    if(head==NULL||head->next==NULL)return head;

    ListNode* odd=head;
    ListNode* even=head->next;
    ListNode* evenHead=even;

    while(even!=NULL&&even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
    }

    odd->next=evenHead;
    return head;
/*
    ListNode* odd=new ListNode(-1);
    ListNode* oddHead=odd;

    ListNode* even=new ListNode(-1);
    ListNode* evenHead=even;

    int i=3;
    while( temp->next!=NULL && temp->next->next!=NULL){
          if(i%2==1){
              odd->next=temp->next->next;
              odd=odd->next;
          }
          else{
               even->next=temp->next->next;
              even=even->next;
          }
          i++;
          temp=temp->next;
    }

    odd->next=evenHead;
   even->next=NULL;

    return oddHead->next;
*/

/*
    //ListNode* temp=head;
    ListNode* odd=head;
    ListNode* oddHead=head;
    ListNode* even=head->next;
    ListNode* evenHead=head->next;

    while(odd!=NULL && odd->next!=NULL && even!=NULL &&even->next!=NULL){
         odd->next=odd->next->next;
         odd=odd->next;
         even->next=even->next->next;
         even=even->next;
    }

    even->next=NULL;
    odd->next=evenHead;

    return oddHead;*/

}
