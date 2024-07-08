#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* prevptr;
    Node* nextptr;

    Node(int val)
    {
        data = val;
        prevptr = NULL;
        nextptr = NULL;
    }
};
void insertAtHead(Node* &head,int value)
{
    Node* n = new Node(value);
    if(!head){
    head->prevptr = n;}
    n->nextptr = head;
    head =n;
}
void insertAtTail(Node* &head,int value)
{
   
   
    if(head == NULL)
    {
        insertAtHead(head,value);
        return;
    }
     Node* n = new Node(value);
      Node* temp = head;
    while(temp->nextptr != NULL)
    {
        temp = temp->nextptr;
    }
    temp->nextptr = n;
    n->prevptr = temp;
}
void display(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->nextptr;
    }
    cout<<"NULL"<<endl;
}

int main()
{
   Node* head = NULL;
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   display(head);

    return 0;
}