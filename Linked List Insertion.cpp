
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the linked list node is as
struct node
{
    int data;
    struct node *next;
};
*/
// function inserts the data in front of the list
void insertAtBegining(struct node** headRef, int newData)
{
    struct node *temp = *headRef;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=newData;
    newnode->next = temp;
    *headRef = newnode;
}
// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
    struct node *temp = *headRef;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=newData;
    newnode->next = NULL;
    if(temp == NULL){
        *headRef = newnode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next = newnode;
}
