#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node 
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,count=0,elmnt,entr;
	while(1)
	{
	printf("\n 1. insert\n 2. display\n 3. count\n 4.search elmnt\n 5.del elmnt\n 6.exit");
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	{
	printf("\n enter data:");
	scanf("%d",&entry);
	if(head==NULL)
	{
	head=(struct node *)malloc(sizeof(struct node));
	head->data=entry;
	pos=head;
	tail=head;
	}
	else
	{
		tail->next=(struct node *)malloc(sizeof(struct node));
		tail=tail->next;
		tail->data=entry;
		}
		break;
		}
	case 2:
	{
		pos=head;printf("\n elements are;");
		while(pos!=NULL)
		{
			printf("\t %d",pos->data);
			pos=pos->next;
		}
		break;
		}
	case 3:
	{
		pos=head;
		while(pos!=NULL)
		{
			
			count=count+1;
			pos=pos->next;
			}
			printf("%d",count);
		
		}break;
	case 4:
	{
		scanf("%d",&elmnt);
		pos=head;
		count=1;
		while(pos!=NULL)
		{	if(elmnt==pos->data)
			{
			printf("element found at postn %d",count);
			}
			pos=pos->next;
			count++;
			}
			}break;
	case 5:
	{
		struct node *temp=head;
		printf("enter elemnt postn");
		scanf("%d",&entr);
		if(entr==0)
		{
		head=head->next;
		temp->next=NULL;
		free(temp);
		}
		else
		{
			for(int i=0;i<entr-1;i++)
			{
			temp=temp->next;
			}
			struct node *del=temp->next;
				printf("\nHi");
			temp->next=temp->next->next;
			del->next=NULL;
			free(del);
			
			}
			
		
			}break;
		
		
		
		
		
			
	case 6:
	{
		printf("\n goodbye");
		exit(0);
		}
		}
		}
		
		
		
		}
