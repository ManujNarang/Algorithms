#include<iostream>
using namespace std;
struct manuj
{
		int value;
		manuj *next;
		}*head=NULL,*curr,*newnode;
void createNode(int i)
{
	newnode=new manuj;
	newnode->value=i;
	if(head==NULL)
	{	
		head=newnode;
		curr=head;
		head->next=NULL;
		}
	else{
		curr->next=newnode;
		curr=curr->next;
		curr->next=NULL;
	}
	}
int main()
{
	int n,k,i;
	cin>>n;
	for(i=0;i<n;i++)
	 {
	 	cin>>k;
	  	createNode(k);
	}
	while(head!=NULL)
	{	
	cout<<head->value;
	head=head->next;
	}
}

