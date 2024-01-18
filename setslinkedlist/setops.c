#include <stdio.h>
#include <stdlib.h>

struct node{
	char data;
	struct node * next;
};

typedef struct node Node;

struct node *mloc(Node *t) {
    t = (struct node *)malloc(sizeof(struct node));
    return t;
}

int in(Node *H, char c){
	
	while (H!=NULL){
	if (H->data==c){
		return 1;
		break;
	}
	
	H=H->next;
	}
	
	if (H==NULL){
	return 0;
	}
}


Node * concatenate(Node *H1,Node *H2){
	Node *t,*t1;
	t=mloc(t);
	t1=t;
	
	if (H1==NULL && H2==NULL){
		return NULL;
	}
	
	else if (H1==NULL && H2!=NULL)
	{	
		while (H2!=NULL)
		{
			t->data=H2->data;
			t=t->next;
			t=mloc(t);
			
			H2=H2->next;
		}
		t=NULL;
		return t1;
	}	
	
	else if (H2==NULL && H1!=NULL)
	{
		while (H1!=NULL)
		{
			t->data=H1->data;
			t=t->next;
			t=mloc(t);
			
			H1=H1->next;
		}
		t=NULL;
		return t1;
	}
	
	else {
		while (H1!=NULL || H2!=NULL){
			while (H1!=NULL){
				t->data=H1->data;
				H1=H1->next;
				t->next=mloc(t->next);
				t=t->next;
			}

			while (H2!=NULL){
				t->data=H2->data;
				H2=H2->next;
				t->next=mloc(t->next);
				t=t->next;
			}
		t=NULL;		
		}
		return t1;
	}
	
}

Node * intersection(Node *H1,Node *H2){
	Node *t;
	t=mloc(t);
	Node *t2=NULL;
	t2=t;
	
	if (H1==NULL || H2==NULL){
		return NULL;
	}
	
	else {
		while (H1!=NULL){
			if(in(H2,H1->data)){
			{
				t->data=H1->data;
				t=t->next;
				t=mloc(t);				
			}
			H1=H1->next;

		}
		return t2;
	
	}
	
}	
}

Node * Union(Node *H1,Node *H2){
	Node *t=NULL;
	t=mloc(t);
	
	Node *t2=NULL;
	t2=t;
	
	if (H1==NULL && H2==NULL){
		return NULL;
	}
	
	else if (H1==NULL && H2!=NULL)
	{	
		while (H2!=NULL)
		{
			t->data=H2->data;
			t=t->next;
			t=mloc(t);
			
			H2=H2->next;
		}
		t=NULL;
		return t2;
	}	
	
	else if (H2==NULL && H1!=NULL)
	{
		while (H1!=NULL)
		{
			t->data=H1->data;
			t=t->next;
			t=mloc(t);
			
			H1=H1->next;
		}
		t=NULL;
		return t2;
	}

	else {
		while(H1!=NULL){
			if (in(H2,H1->data)){
				H1=H1->next;
			}
			else{
			t->data=H1->data;
			t->next=mloc(t->next);
			t=t->next;
			H1=H1->next;
			}
		}
		while(H2!=NULL){
			t->data=H2->data;
			t->next=mloc(t->next);
			t=t->next;
			H2=H2->next;
		}
		t=NULL;
		return t2;
	}	
	
}

Node * createlt(Node *H){
	int num,i=0;
	char c;
	printf("Enter the number:");
	scanf("%d",&num);
	Node *t=H;
	H=mloc(H);
	
	while(i<num){
		
		
		printf("Enter the data:");
		
		scanf("%c",&c);
		getchar();
		H->data=c;
		H->next=mloc(H->next);
		H=H->next;
		i++;		
	}
	H=NULL;
	return t;
}

void displaylinkedlist(struct node *H){
	
	Node *temp;
	temp=H;
	
	if (temp==NULL)
		{
			printf("It is a empty list\n");
		}
	else 
		{
			while(temp!=NULL)
				{	
					if(temp!=NULL){
						printf("%c\n",temp->data);
					}
					
					temp=temp->next;
				}
		}
}

int main(){

	Node *H1=NULL,*H2=NULL;
	
	Node *H11,*H12,*H21,*H22;

	H11=mloc(H11);
	H12 = mloc(H12);
	H21 = mloc(H21);
	H22 = mloc(H22);
	
	
	H11->data='K';
	H11->next=H12;
	
	H12->data='D';
	H12->next=NULL;

	H21->data='Z';
	H21->next=H22;
	
	H22->data='A';
	H22->next=NULL;
	
	H1=H11;
	H2=H21;
	
	Node *temp=NULL;
	
	temp=createlt(temp);
	displaylinkedlist(temp);


	
	return 0;

}




















