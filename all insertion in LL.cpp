#include<stdio.h>
#include<bits/stdc++.h> 
#include<conio.h>
using namespace std;

class node
{
  public:
  int data;
  node *next;
};

void push(node **head_ref,int new_data)
{
node *new_node= new node();
new_node->data=new_data;
new_node->next=(*head_ref);
(*head_ref) = new_node;
}

void after(node* prev_node, int new_data)
{
 if(prev_node==NULL )
 {
  cout<<"its not possible"<<endl;
  return;
 }
  node* new_node =new node();
  new_node->data=new_data;
  new_node->next=prev_node->next;
  prev_node->next=new_node;
}

void append(node** head_ref,int new_data)
{
  node * new_node =new node();
  node * last = *head_ref;
  new_node->data=new_data;
   new_node->next=NULL;

   if(*head_ref==NULL)
   {
    *head_ref = new_node;
    return;
   }
   while(last->next!=NULL)
   last=last->next;

   last->next = new_node;
   return;

}

void print_list(node * node)
{
 while(node!=NULL)
 {
 cout<<"  "<<node->data;
 node=node->next;
 }
}
int main()
{

node * head = NULL;
append(&head,6);
push(&head,7);
push(&head,1);
append(&head,4);
after(head->next, 8);
cout<<"created linked list is";
print_list(head);

return 0;
}