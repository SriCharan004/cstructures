#include <stdio.h>
#include <stdlib.h>


//defintion

struct node{
	char data;
	struct node *next;
};

typedef struct node Node;

struct node *mloc(Node *t) {
    t = (struct node *)malloc(sizeof(struct node));
    return t;
}
void displaylinkedlist(struct node *H);
int count(struct node *head);
struct node * insertatbeg(Node *head,char c);
struct node *insertatend(Node* head, char c);







int main()
{
	Node *head=NULL;
	
	Node *first,*second,*third,*fourth;

	first=mloc(first);
	second = mloc(second);
	third = mloc(third);
	fourth = mloc(fourth);
	
	
	first->data='K';
	first->next=second;
	second->data='B';
	second->next=third;
	third->data='C';
	third->next=NULL;
	head=first;
	
	//displaylinkedlist(head);

	//insertatend(head,'c');

	displaylinkedlist(head);
	printf("Total nummber of nodes are %d\n",count(head));
	
	
	Node *T;
	T=mloc(T);
	T=NULL;
	head=insertatbeg(head,'A');
	displaylinkedlist(head);
	printf("Total nummber of nodes are %d\n",count(head));
	
	
	
}



struct node *insertatend(Node* head, char c) {
	Node* tail=NULL;
	tail=mloc(tail);	

//allocation
	if (tail!=NULL)
		{	
			tail->data=c;
			tail->next=NULL;
		}
  
//if it is empty
	if (head==NULL)
	{
		return tail;
	}

	

//else, we traverse
	else{
	Node *curr=head; //A temp variable

	while(curr->next!=NULL)
		{
		curr=curr->next;
		}
//insertion
	
	curr->next=tail;
	
		return curr;
	}
}


struct node * insertatbeg(Node *head,char c){

	
	Node *beg=NULL;
	beg=mloc(beg);
	
	if (beg!=NULL)//allocation
		{
			beg->data=c;
		}
	
	
	if (head==NULL){ //if it is empty
		beg->next=NULL;
		return beg;
	}
	else{// if it not empty
		Node *temp=head;
		beg->next=temp;
		return beg;
	}
		

}

int count(struct node *h){
	
	int i=0;
	
	while(h->next!=NULL)
		{
			i++;
			h=h->next;
		}
	return i+1;
}




void displaylinkedlist(struct node *H){
	
	if (H==NULL)
		{
			printf("It is a empty list\n");
		}
	else 
		{
			while(H!=NULL)
				{
					printf("%c\n",H->data);
					H=H->next;
				}
		}
}


struct node * del(struct node *head,char c){
	Node * curr;
	Node *prev;
	
	prev=mloc(prev);
	curr=mloc(curr);
	
	curr=head;
	
	while (curr!=NULL)
		{
			if(curr->data=c)
				{
					
					
					if (prev!=NULL){
						prev->next=curr->next;				
					}
				
					else {
						head=curr->next;
					}
					free(curr);
					break;
				}
		}
	if(curr==NULL)
		printf("Not found");

	return head;
}




