#include <stdio.h> 
#include <conio.h>
#include<bits/stdc++.h> 
using namespace std; 

class node 
{ 
     public:
     int data; 
	 node *next; 
}; 

void printList(node* n) 
{ 
	while (n != NULL) 
	{ 
	cout<<" "<< n->data ; 
	n = n->next; 
	} 
} 

int main()
{
    node * first=NULL;
    node * second=NULL; 
	node * third=NULL;
	
	first= new node();
	second= new node();
	third = new node();
	
	first->data=3;
	first->next=second;
	second->data=4;
	second->next=third;
	third->data=5;
	third->next=NULL;
	
	cout<<" the linked list is";
	printList(first);
	return 0; 	
}