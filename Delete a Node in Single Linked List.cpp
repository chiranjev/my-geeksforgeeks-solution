
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/

Node* deleteNode(Node *head,int x)
{
    Node *temp = head;
    Node *prev =NULL;
    int i=1;
    while(i!=x){
        i++;
        prev = temp;
        temp=temp->next;
    }
    if(temp==head){
        head = head->next;
    }else{
        prev->next = temp->next;
    }
    free(temp);
    return head;
}
