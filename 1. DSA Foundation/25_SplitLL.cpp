/*
 Problem Description
Given a linked list, split it into two lists such that all the nodes with even data are in one list and the ones with odd data are in another list.


Make sure that the nodes appear in the same order in which they are present in the original list. For instance, for 1, 2, 3, 4, 5, odd data nodes have to be 1, 3, 5 and not 1, 5, 3 for the tests to pass.


Note that input and output are being handled by a main() method behind the scenes, so you do NOT have to implement the main() method or any I/O here.


You’d have to implement the function defined in the stub, and return the answer based on the return type of the function.


The structure of the linked list is given as a reference for you while writing the code. Do not make any modifications to it, or any of the rest of the stub, or the tests would fail.


Input format
There are two lines of input.

First line contains the N size of the linked list.

Next line contains N space separated integers describing the linked list.

Output format
Print the list with odd elements in the first line and the list with even elements in the second line.

Sample Input 1
5

1 3 2 4 5

Sample Output 1
1 3 5

2 4

Constraints
1 <= N <= 200
*/

vector<ListNode*> split(ListNode* head) {
    ListNode *even = new ListNode(-1);
    ListNode *temp1=even;//head
    ListNode *odd = new ListNode(-1);
    ListNode *temp2=odd;//head

    ListNode* temp=head;
    while(temp!=NULL){
        if(temp->data%2==0){//even
            temp1->next=temp;
            temp1=temp1->next;
        }
        else{//odd
            temp2->next=temp;
            temp2=temp2->next;
        }
        temp=temp->next;
    }
    temp1->next=NULL;
    temp2->next=NULL;

    vector<ListNode*> Ans;
   
    Ans.push_back(odd->next);
    Ans.push_back(even->next);

    return Ans;




}
