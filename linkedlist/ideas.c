struct node * del(struct node *head,char c){

	int pos,i=1;
	Node * temp;
	temp=mloc(temp);
	temp=head;
	if (head==NULL)
		{
			printf("No nodes found\n");

			return head;
		}
	else{
		while(head!=NULL)
			{
				if (head->data==c)
					{
						pos=i;
						break;					
					}	
				i++;
				head=head->next;
			}
		for(int j=1;j<=pos;j++)
			{
			head=head->next;
			}
		
	}
}




