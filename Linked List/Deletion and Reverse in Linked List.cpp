{
// C program to delete a given key from
// linked list.
#include<bits/stdc++.h>
using namespace std;
/* structure for a node */
struct Node
{
	int data;
	struct Node *next;
};
Node *pre=NULL;
/* Function to delete a given node from the list */
//void deleteNode(struct Node *head, int key);
void deleteNode(Node **head,int data);
void reverse(Node **head);
/* Function to reverse the linked list */
//static void reverse(struct Node** head_ref);
/* Function to insert a node at the beginning of
a Circular linked list */
void push(struct Node **head_ref, int data)
{
	// Create a new node and make head as next
	// of it.
      struct Node *curr =
		(struct Node *)malloc(sizeof(struct Node));
    curr->data=data;
    curr->next=curr;

	if(*head_ref==NULL)
    {
      //  cout<<"Woreks"<<endl;
        *head_ref=curr;
        curr->next=*head_ref;
        pre=*head_ref;
    }
    else
    { //cout<<"Woreks2"<<endl;
        curr->next=*head_ref;
        pre->next=curr;
        pre=pre->next;
    }
}
/* Function to print nodes in a given
circular linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	if (head != NULL)
	{
		do
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		while (temp != head);
	}
    else
    cout<<"empty"<<endl;
	printf("
");
}
/* Driver program to test above functions */
int main()
{
	/* Initialize lists as empty */
	int t,a,delnode;
	cin>>t;
	while(t--)
	{
        pre=NULL;
	   Node *head=NULL;

        int n;
	    cin>>n;
	    while(n--)
	    {
	        cin>>a;
	        push(&head,a);
	    }
	/* Created linked list will be 2->5->7->8->10 */
	cin>>delnode;
//	printList(head);
	deleteNode(&head, delnode);
	//printList(head);
	reverse(&head);
	printList(head);
  //  cout<<head->data<<endl;
}
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* structure for a node
struct Node
{
	int data;
	struct Node *next;
};
*/
/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{
    Node *temp = *head;
    Node *prev = NULL;
    while(temp->next!=*head){
        if(temp->data == key){
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    if(temp == *head){
        while(temp->next!=*head){
            temp=temp->next;
        }
        *head = temp->next;
        temp->next = *head;
    }else{
        prev->next = temp->next;
    }
    free(temp);
}
/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
    Node *prev = NULL;
    Node *curr = *head_ref;
    Node *next = NULL;

    do{
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }while(curr!=(*head_ref));
    (*head_ref)->next = prev;
    (*head_ref)=prev;
}a
