/*
Problem Description
Given a pointer to a node in a sorted circular singly linked list( sorted in ascending order), write a function to insert a value K into the list such that the linked list still remains a sorted circular list.


Note1: If the given pointer is null i.e. empty list, create a circular list with a new node and return the reference to the new node. Otherwise,return the initial input pointer given.


Note2: The list could have duplicate values. You can insert the new value in any place which will keep the list sorted.

Input Format
First line contains N, the number of nodes in the linked list.

The next line contains N space-separated integers, representing the nodes of the circular linked list.

The last line contains a single integer K, denoting the value that is to be inserted.

Output Format
Return the original pointer given as an argument, after modifying the list by inserting the value. The output prints the modified linked list starting from the returned node.

Constraints
0 <= N <= 10^5

0 <= value <= 10^9

0 <= K <= 10^9

Sample Input 1
7

4 5 9 10 0 1 2

7

Sample Output 1
4 5 7 9 10 0 1 2

Explanation 1
The input is a sorted circular linked list and the given pointer is a reference to node [4]. A new node with [7] has to be inserted between [5] and [9] for the list to remain sorted. Return node [4] which is the input pointer given.

Sample Input 2
0

4

Sample Output 2
4

Explanation 2
The input is a sorted circular linked list which is empty. Create a circular linked list with a new node [4] and return the new node.
*/



// Implement your solution here
ListNode* insertIntoSortedCircularList(ListNode* head, int insertVal)
{   
	ListNode* newNode=new ListNode(insertVal);
	if(head==NULL){
		newNode->next=newNode;
		return newNode;
	}



	ListNode* prev=head;
	ListNode* curr=head->next;
	bool inserted=false;

	while(true){ // value inbetween
		if(prev->val<=insertVal && insertVal<=curr->val || prev->val>curr->val && (insertVal>=prev->val||insertVal<=curr->val)){
			
			//  3->4->5   ||  5->6->3  || 5->2->3
			//  prev->insert->curr
			prev->next=newNode;
			newNode->next=curr;
			inserted=true;
			break;
		}
		prev=curr;
		curr=curr->next;

		if(prev==head)break;//one cycle completed must be added at end
	}
	if(!inserted){
		prev->next=newNode;
		newNode->next=curr;
	}
	return head;

	
}
