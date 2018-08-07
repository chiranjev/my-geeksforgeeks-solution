{
#include<bits/stdc++.h>
using namespace std;
struct QueueNode
{
    int data;
    QueueNode *next;
};
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
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
        Queue *sq = new Queue();
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
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/
void Queue:: push(int x)
{
    QueueNode *newnode = (QueueNode*)malloc(sizeof(QueueNode));
    newnode->data = x;
    newnode->next = NULL;
    if(rear==NULL){
        front = newnode;
        rear = newnode;
    }else{
        rear->next = newnode;
        rear = rear->next;
    }
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
    if(front == NULL){
        return -1;
    }else{
        int ret = front->data;
        front = front->next;
        if(front==NULL){
            rear = NULL;
        }
        return ret;
    }
}
