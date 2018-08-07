{
#include<bits/stdc++.h>
using namespace std;
struct StackNode
{
    int data;
    StackNode *next;
};
class Stack {
private:
StackNode *top;
public :

    void push(int);
    int pop();
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Stack *sq = new Stack();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
    }

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
};
and the structure of the class is
class Stack {
private:
  StackNode *top;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void Stack :: push(int x)
{
    StackNode *newnode = (StackNode*)malloc(sizeof(StackNode));
    newnode->data = x;
    newnode->next = NULL;
    if(top == NULL){
        top = newnode;
    }else{
        newnode->next = top;
        top = newnode;
    }
}
/*The method pop which return the element poped out of the stack*/
int Stack :: pop()
{
    if(top==NULL){
        return -1;
    }else{
        int ret = top->data;
        top=top->next;
        return ret;
    }
}
