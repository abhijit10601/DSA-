/*
 Problem Description
In this problem, you’ll learn to implement functions to insert a node at the beginning and end of a linked list.


Note that input and output are being handled by a main() method behind the scenes, so you do NOT have to implement the main() method or any I/O here.


You’d have to implement the insertAtEnd and insertAtBeginning functions defined in the stub, using the arguments, and returning the answer based on the return type of the functions.


The structure of the linked list is given as a reference for you while writing the code. Do not make any modifications to it.


Input format
There are Q+1 lines of input.

First line contains Q, number of queries.

Each of the next Q lines contains 2 integers, representing the type of query and the data.

A query 1 3 means to insert 3 at the beginning of the LL.

A query 2 6 means to insert 6 at the end of the LL

Output format
After each query print the linked list where each node's data is printed separated by space.

Sample Input 1
5

1 2

1 3

2 7

1 9

2 11

Sample Output 1
2

3 2

3 2 7

9 3 2 7

9 3 2 7 11

Constraints
1 <= Q <= 20
*/

class LinkedList {

public:
    ListNode *head;
    ListNode *tail;

    LinkedList() {
        head = tail = NULL;
    }

    void insertAtBeginning(int data) {
        ListNode *node=new ListNode(data);
        if(head==NULL)node->next=NULL;// empty list
        node->next=head;
        head=node;
    }

    void insertAtEnd(int data) {
        ListNode *node=new ListNode(data);
        
        if(head==NULL){node->next=NULL;head=node;}//empty list

        ListNode *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=node;
        node->next=NULL;


    }
};
