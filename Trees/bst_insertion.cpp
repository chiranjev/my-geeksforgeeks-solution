#include<bits/stdc++.h>

using namespace std;

typedef struct node{
  int data;
  struct node *left;
  struct node *right;
}Node;


void insertBst(Node **head,int data){
  Node *newnode = (Node*)malloc(sizeof(Node));
  newnode->data = data;
  newnode->left = NULL;
  newnode->right = NULL;

  if(*head == NULL){
    *head = newnode;
  }else{
    if((*head)->data>data){
      insertBst(&(*head)->left,data);
    }else{
      insertBst(&(*head)->right,data);
    }
  }
}

void preorder(Node *head){
  if(head == NULL){
    return;
  }
  cout << head->data << " ";
  preorder(head->left);
  preorder(head->right);
}

void inorder(Node *head){
  if(head == NULL){
    return;
  }
  inorder(head->left);
  cout << head->data << " ";
  inorder(head->right);
}

void postorder(Node *head){
  if(head == NULL){
    return;
  }
  postorder(head->left);
  postorder(head->right);
  cout << head->data << " ";
}

int main(){

  Node *head = NULL;
  insertBst(&head,10);
  insertBst(&head,12);
  insertBst(&head,8);
  insertBst(&head,6);
  insertBst(&head,9);
  insertBst(&head,11);
  insertBst(&head,14);

  preorder(head);
  cout << endl;
  inorder(head);
  cout << endl;
  postorder(head);
  cout << endl;
  return 0;
}
