#include<bits/stdc++.h>
using namespace std;

class Node
{   
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void Delete(Node* &head,int val)
{
  Node*temp;
  Node*prev;
  prev = temp = head;
  if(head == NULL){return;}
  if(head->data == val)
  {
    head = temp->next;
    delete(temp);
    return;
  }
  while(temp!=NULL)
  {
    if(temp->data == val)
    {
      prev->next = temp->next;
      delete(temp);
    }
    else
    {
      prev = temp;
      temp = temp->next;
    }
  }
  
}
void addEnd(Node* &head,int val)
{
  Node* n = new Node(val);
 
  if(head == NULL){
    head = n;
    return ;
  }
   Node* temp = head;
  while(temp->next != NULL)
  {
      temp = temp->next;
  }
  temp->next = n;
//  return n;
}
void addBegin(Node* &head,int val)
{
    Node* n = new Node(val);
    n->next = head;
    head = n;

}
// void reverse(Node* &head)
// {
//   Node* temp;
//   temp = head->next;
//   head->next = NULL;
//   while(temp != NULL)//shouldn't this be temp->next!=null
//   {
//     Node* n = temp->next;
//     temp->next = head;
//     head = temp;
//     temp = n;
//   }
//   // head = temp;
//   // return head;
// }
Node* reverse(Node* &head)
{
  Node* prev=NULL;
  Node* temp=head;
  Node* curr;

  while(temp != NULL)
  {
    curr = temp->next;
    temp->next = prev;
    prev = temp;
    temp = curr;
  }
  // head = prev;
  return prev;
}
Node* recurReverse(Node* &head)
{
  if(head == NULL || head->next == NULL)
  {
    return head;
  }
  Node* newhead = recurReverse(head->next);
  head->next->next = head;
  head->next = NULL;

  return newhead;
}
Node* reverseK(Node* &head,int k)
{
  Node* prev = NULL;
  Node* curr = head;
  Node* next ;
  int c=0;
  while(curr != NULL && c!=k)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    c++;
  }
  if(next != NULL)
    head->next = reverseK(next,k);

  return prev;
}
bool detectCycle(Node* &head)
{
  Node* fast=head;
  Node* slow=head;
  while(fast!=NULL && fast->next != NULL)
  {
    
   slow = slow->next;
   fast = fast->next->next;
    if(fast == slow){
      return true;}
  }
  return false;
}
void createCycle(Node* &head,int pos)
{
  Node* temp = head;
  Node* startNode;
  int c=1;
  while(temp->next != NULL)
  {
    if(c == pos)
      startNode = temp;
    
    temp = temp->next;
    c++;
  }
  temp->next = startNode;
}
void removeCycle(Node* head)
{
  Node*fast = head;
  Node*slow = head;

  do{

    fast = fast->next->next;
    slow = slow->next;

  }while(fast != slow);

  fast = head;
  while(fast->next != slow->next)
  {
    slow = slow->next;
    fast = fast->next;
  }
  slow->next = NULL;
}
void display(Node* &head)
{
  Node* temp = head;
  while(temp!=NULL)
  {
      cout<<temp->data<<"->";
      temp = temp->next;
  }
  cout<<"NULL"<<endl;
}
int main()
{
    Node*head = NULL;
    addEnd(head,1);
    addEnd(head,2);
    addEnd(head,3);
    // addBegin(head,4);
   // // Delete(head,1);
    addEnd(head,4);
    addEnd(head,5);
    addEnd(head,6);
     addEnd(head,7);
      addEnd(head,8);
    display(head);
    // Node* newh = reverse(head);
  //  // // reverse(head);
  //   cout<<endl;
  //   cout<<"after reversing:"<<endl;
  //   display(newh);
  //   cout<<"reverse again"<<endl;
    // Node* newh1 = recurReverse(newh);
    // display(newh1);
    Node* newh2 = reverseK(head,3);
    display(newh2);
    // cout<<detectCycle(head)<<endl;
    // createCycle(head,3);
    // cout<<detectCycle(head)<<endl;
    // removeCycle(head);
    //  cout<<detectCycle(head)<<endl;
    // display(head);

    return 0;
}