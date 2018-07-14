{
#include <stdio.h>
#include <stdlib.h>

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};
void deleteNode(struct Node **head_ref,int temp);
 struct Node* newNode(struct Node* head,int data){
	 struct Node *p,*temp= (struct Node*)malloc(sizeof(struct Node));
	 temp->data=data;
	 temp->next=NULL;
	 temp->prev=NULL;
	 if(head ==NULL)
	 return temp;
	 p=head;
	 while(p->next!=NULL){
	 p=p->next;}
	 p->next=temp;
	 temp->prev=p;
	 return head;
	 }

/* Function to print Nodes in a given doubly linked list
   This function is same as printList() of singly linked lsit */
void printList(struct Node *Node)
{
  while(Node!=NULL)
  {
   printf("%d ", Node->data);
   Node = Node->next;
  }
   printf("
");
}

/* Drier program to test above functions*/
int main()
{
  int t,x,n,i;
  scanf("%d",&t);
  while(t--)
  {
  /* Start with the empty list */
  struct Node *temp,*head = NULL;
   scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&x);
   /* Let us create the doubly linked list 10<->8<->4<->2 */
  head=newNode(head, x);
  }
  //printList(head);
  temp=head;
  scanf("%d",&x);
  // x=rand()%n;
 // x=x-1;
  /* delete Nodes from the doubly linked list */
//  while(x--)
//  temp=temp->next;

  deleteNode(&head,x);  /*delete first Node*/
  /* Modified linked list will be NULL<-8->NULL */
  printList(head);
  while(head->next!=NULL)
  {
	  temp=head;
	  head=head->next;
	  free(temp);
	  }
	  free(head);
	}
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*struct Node
{
  int data;
  Node *next;
  Node *prev;
};
 */
void deleteNode(Node **head_ref, int x)
{
    Node *temp = *head_ref;
    int i = 1;

    while(i!=x){
        i++;
        temp=temp->next;
    }

    if(temp==*head_ref){
        if(temp->next!=NULL){
            temp->next->prev = NULL;
        }
        *head_ref=temp->next;
    }else if(temp->next == NULL){
        temp->prev->next = NULL;
    }else{
        temp->prev->next = temp->next;
        temp->next->prev=temp->prev;
    }
    free(temp);
}
