{
#include<stdio.h>
#include<stdlib.h>
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node *start = NULL;
void sortList(struct Node *head);
// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("
");
}
/* Drier program to test above function*/
void insert(int n1)
{
    int n,value,i;
    //scanf("%d",&n);
    n=n1;
    struct Node *temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);

        if(i==0)
        {
            start=(struct Node *) malloc( sizeof(struct Node) );
            start->data=value;
            start->next=NULL;
            temp=start;
            continue;
        }
        else
        {
            temp->next= (struct Node *) malloc( sizeof(struct Node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
int main()
{

    int n;

    int t;
    scanf("%d",&t);

    while (t--) {
        scanf("%d",&n);

        insert(n);
        sortList(start);
        printList(start);
    }

    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     Node *next;
  }
*/
void sortList(Node *head)
{
   Node *curr = head;
   int zero = 0;
   int one = 0;
   int two = 0;
   while(curr!=NULL){
       if(curr->data ==0){
           zero++;
       }else if(curr->data == 1){
           one++;
       }else{
           two++;
       }
       curr=curr->next;
   }
   curr=head;
   while(curr!=NULL){
       if(zero>0){
           curr->data = 0;
           zero--;
       }else if(one>0){
           curr->data = 1;
           one--;
       }else if(two>0){
           curr->data = 2;
           two--;
       }
       curr=curr->next;

   }
}
