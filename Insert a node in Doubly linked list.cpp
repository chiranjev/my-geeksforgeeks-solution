{
#include <bits/stdc++.h>
using namespace std;
/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};
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
/* Function to reverse a Doubly Linked List */
void addNode(struct Node **head_ref,int pos,int data);
void printList(struct Node *Node)
{
  struct Node *temp=Node;
  //goto end
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  //goto start
  while(temp->prev!=NULL)
  {
   temp = temp->prev;
  }
  //now print
  while(temp!=NULL)
  {
      printf("%d ",temp->data);
      temp=temp->next;
  }
  printf("
");
}
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
  head=newNode(head, x);
  }
  int pos,data;
  cin>>pos>>data;
  addNode(&head,pos,data);
  printList(head);
  while(head->next!=NULL)
  {
	  temp=head;
	  head=head->next;
	  free(temp);
	  }
	}
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
}; */
/* Function to insert into a Doubly Linked List */
void addNode(struct Node **head_ref,int pos,int data)
{
    struct Node *temp = *head_ref;
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;

    int i=0;
    while(i!=pos){
        i++;
        temp=temp->next;
    }

    newnode->prev = temp;
    newnode->next = temp->next;
    if(temp->next!=NULL){
        temp->next->prev = newnode;
    }
    temp->next = newnode;
}
