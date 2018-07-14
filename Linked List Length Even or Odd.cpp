
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     int count = 0;
     while(head!=NULL){
         count++;
         head=head->next;
     }
     if(count&1){
         return 1;
     }
     return 0;
}
