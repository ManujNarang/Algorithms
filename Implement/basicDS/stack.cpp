#include <iostream>
using namespace std;

struct node
{
    int value;
    node *next;
}*head=NULL,*curr=NULL,*newnode=NULL;   //defining the structure

void push(int val)
{   
    newnode= new node;
    newnode->value=val;
    if(head==NULL)
    {
        curr=newnode;
        head=curr;
        head->next=NULL;
    }
    else
    {
        curr=head;
        head=newnode;
        head->next=curr;
    }
}

void pop()
{   curr=head;
    head=head->next;
    cout<<curr->value;
    delete curr;        //avoiding memry leak
}

void print()            //printing all the values in stack
{   curr=head;
    while(curr!=NULL)
    {
        cout<<curr->value<<"\n";
        curr=curr->next;
        
    }
}

int main() {
    
    int n,val;
    cin>>n;
    
    while(n--)
    {
        cin>>val;
        push(val);
    }
    
    print();
    
	return 0;
}
