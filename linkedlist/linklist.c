#include <stdio.h>
#include <stdlib.h>


//defintion

struct node{
	char data;
	struct node *next;
};

typedef struct node Node;
//Display Function
struct node *insertatend(Node* head, char c);

struct node *mloc(Node *t) {
    t = (struct node *)malloc(sizeof(struct node));
    return t;
}

int count(struct node *head);


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
	T=insertatend(T,'P');
	displaylinkedlist(T);
	printf("Total nummber of nodes are %d\n",count(T));
	
	
	
	
}



struct node *insertatend(Node* head, char c) 
{
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




int count(struct node *h){
	
	int i=0;
	
	while(h->next!=NULL)
		{
			i++;
			h=h->next;
		}
	return i+1;
}






