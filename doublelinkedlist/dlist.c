#include <stdio.h>
#include <stdlib.h>


struct dllnode{

	char data;
	struct dllnode *left;
	struct dllnode * right;
};

typedef struct dllnode Node;





int count(Node *H){
	int i=0;
	Node *t=NULL;
	t=H;
	
	while(t!=NULL){
	i++;
	t=t->right;}
	return i;

}


Node *insertafterpos(Node *H,int pos,char c){

	int i=1;
	Node *temp=NULL;
	if(count(H)<pos)
	{
		printf("Error\n");
		return H;
	}
	else{
		while(i<pos)
		{
			i++;
			H=H->right;
		}
		temp=(Node *)malloc(sizeof(Node*));
		if(temp!=NULL){
			temp->data=c;
			temp->right=H->right;
			H->right->left=temp;
			temp->left=H;
			H->right=temp;
		}
		while(H->left!=NULL){
		H=H->left;
		}
		return H;
	}
}


Node *Deletechar(Node *H,char c){
	Node *t;t=H;
	if(H==NULL){
		return H;
	}
	else{
		if(H->data==c){
			H=H->right;
			free(H->left);
			return H;		
		}
		
		else{
			
			while(t->right!=NULL){
				if(t->data==c){
					t->left->right=t->right;
					t->right->left=t->left;
					free(t);
					break;
				}
				t=t->right;
			}
			
			if(t->right==NULL && t->data==c)
			{
					t->left->right=t->right;
					free(t);
					return H;
				
			}
			else if(t->right==NULL && t->data!=c){
				printf("Element not found\n");
				return H;
			}
			else{
			return H;
			}
		}
	}
}


Node *reverse(Node *H){
	Node *t1=NULL,*temp=NULL,*newhead=NULL;
	t1=H;
	if(H==NULL){
	return NULL;
	}
	
	else{
		while(t1->right!=NULL){
			t1=t1->right;	
		}
		newhead=t1;
		while(t1!=NULL){
			temp=t1->right;
			t1->right=t1->left;
			t1->left=temp;
			
			t1=t1->right;
		}
		return newhead;	
	}
}

Node *insertatbeg(Node *H,char c){
	
	Node *temp;
	
	temp=(Node *)malloc(sizeof(Node*));
	if(temp!=NULL){
		temp->data=c;
		temp->left=NULL;
		temp->right=NULL;
	}
	if(H==NULL){
		return temp;	
	}
	
	else{
		temp->right=H;
		H->left=temp;
		return temp;
	}

}

Node *insertatend(Node *H, char c){
	
	Node *temp,*t=NULL;
	t=H;
	
	temp=(Node *)malloc(sizeof(Node*));
	if(temp!=NULL){
		temp->data=c;
		temp->left=NULL;
		temp->right=NULL;
	}
	
	if(H==NULL){
		return temp;
	}
	
	else{
		while (t->right!=NULL){
			t=t->right;		
		}
		t->right=temp;
		temp->left=t;
		return H;
	}
	

}


void display(Node *H){
	
	Node *t=NULL;t=H;
	
	if(H==NULL){
		printf("Empty list\n");
	}
	else{
		while(t!=NULL){
		printf("%c\n",t->data);
		t=t->right;
		}
	}
}


Node *create(void){
	int num;
	Node *H=NULL;
	
	printf("Enter the number:");
	scanf("%d",&num);
	char value;	
	for (int i=0;i<num;i++){
		
		getchar();
		printf("Enter the data:");
		scanf("%c",&value);
		H=insertatend(H,value);
	}
	return H;
}






















int main(){
	
	Node *H=NULL;
	//H=create(H);
	Node *first,*second,*third;
	first=(Node *)malloc(sizeof(Node*));
	second=(Node *)malloc(sizeof(Node*));
	third=(Node *)malloc(sizeof(Node*));
	first->data='a';
	second->data='b';
	third->data='c';
	first->left=NULL;
	first->right=second;
	second->left=first;
	second->right=third;
	third->left=second;
	third->right=NULL;
	
	first=create();
	
	
	//first=Deletechar(first,'c');

	display(first);
	
	return 1;
}
