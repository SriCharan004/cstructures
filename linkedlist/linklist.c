#include <stdio.h>
#include <stdlib.h>


//defintion

struct node{
	char data;
	struct node *next;
};

typedef struct node Node;
//Display Function
struct node * insertatend(struct node *head,char c);


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
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	
	first->data='A';
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
}




/*struct node *mloc(const char *name) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    return new_node;

}
*/
/*struct node * insertatend(struct node *head,char c)
	{
		struct node *temp;
		temp = (struct node *) malloc(sizeof(struct node));
		temp=head;
	
		if (head==NULL)
			{
				Node *first;			
				first = (struct node *) malloc(sizeof(struct node));
				first->data=c;
				first->next=NULL;
				head=first;
				return head;
			}
		else {
			while(head->next!=NULL)
				{
					head=head->next;
				}
			
			struct node*last;
			last = (struct node *) malloc(sizeof(struct node));
			last->data=c;
			head=last;
			return temp;
		}
	}

*/

int count(struct node *h){
	
	int i=0;
	
	while(h->next!=NULL)
		{
			i++;
			h=h->next;
		}
	return i+1;
}















