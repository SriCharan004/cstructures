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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

#include <stdio.h>
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

#include <stdlib.h>
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

//defintion
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

struct node{
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	char data;
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	struct node *next;
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

};
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

typedef struct node Node;
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

//Display Function
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

void displaylinkedlist(struct node *H){
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	if (H==NULL)
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

		{
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

			printf("It is a empty list\n");
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

		}
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	else 
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

		{
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

			while(H!=NULL)
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

				{
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

					printf("%c\n",H->data);
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

					H=H->next;
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

				}
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

		}
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

}
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

int main()
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

{
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	Node *head=NULL;
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	Node *first,*second,*third,*fourth;
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	first = (struct node *) malloc(sizeof(struct node));
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	second = (struct node *) malloc(sizeof(struct node));
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	third = (struct node *) malloc(sizeof(struct node));
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	fourth = (struct node *) malloc(sizeof(struct node));
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	head=first;
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	first->data='A';
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	first->next=second;
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	second->data='B';
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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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



int main()
{
	Node *head=NULL;
	
	/*Node *first,*second,*third,*fourth;
	
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	
	head=first;
	first->data='A';
	first->next=second;
	second->data='B';
	*/
	
	//displaylinkedlist(head);

	insertatend(head,'c');

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

	displaylinkedlist(head);
}




/*
struct node *mloc(const char *name) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    return new_node;
}
*/

