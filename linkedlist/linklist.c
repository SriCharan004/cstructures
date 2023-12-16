#include <stdio.h>
#include <stdlib.h>


//defintion

struct node{
	char data;
	struct node *next;
};

typedef struct node Node;
//Display Function

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
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	
	displaylinkedlist(head);
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

