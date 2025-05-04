/*
 Problem Description
Given a linked list and an integer X, remove the node in the linked list whose data is X. You can assume all nodes in the linked list to be unique, that is, there will be exactly one node with data X.


Note that input and output are being handled by a main() method behind the scenes, so you do NOT have to implement the main() method or any I/O here.


You’d have to implement the remove() function defined in the stub, using the arguments, and returning the answer based on the return type of the function.


The structure of the linked list is given as a reference for you while writing the code. Do not make any modifications to it.


Input format
There are three lines of input.

First line contains N, the size of the linked list.

Next line contains N space separated integers describing the linked list.

Next line contains a single integer X.

Output format
Print the linked list after removing the element.

Sample Input 1
5

1 2 3 4 5

2

Sample Output 1
1 3 4 5

Constraints
1 <= N <= 200
*/

    void remove(int data) {
        if(head==NULL)return;//0 element LL
          
        if(head->next==NULL && head->data==data){//1 element LL
              head=NULL;
        }
       
        ListNode* temp=head;

         // 1st element 12345 ,1 = 2345
        if(temp!=NULL && temp->data==data){head=head->next;}
       
        // from 2nd element   123456 ,3 = 12456
        while(temp->next!=NULL){
            if(temp->next->data==data){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }


    }
