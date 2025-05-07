#include"header.h"

int count(st *);
void roll_del(st **);
void name_del(st **);
void std_del(st **ptr)
{
	char op;
	printf(" _____________________________\n");
	printf("|                             |\n");
	printf("|********DELETE A STD*********|\n");
	printf("|_____________________________|\n");
	printf("|                             |\n");
	printf("|  r/R:roll no delete;        |\n");
	printf("|  n/N:name delete;           |\n");
	printf("|_____________________________|\n");
	printf("|                             |\n");
	printf("|*******ENTER THE OPTION******|\n");
	printf("|_____________________________|\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 'r':case 'R':roll_del(ptr);break;//ptr=hptr
		case 'n':case 'N':name_del(ptr);break;//ptr=hptr
	        default:printf("option is incorrect\n");
	}
}
void roll_del(st **ptr)
{
	st *temp = *ptr,*prv;
	int n;
	printf("Enter the roll number do delete\n");
	scanf("%d",&n);
	while(temp!=0)
	{
		if(temp->roll == n)
		{
			if(temp == *ptr)
				*ptr = temp->next;
			else
				prv->next = temp->next;
			free(temp);
			temp = NULL;
			return;
		}
		else
		{
			prv = temp;
			temp = temp->next;
		}
	}
	printf("the roll doesn't exist to delete\n");
}
void name_del(st **ptr)
{
	st *temp = *ptr,*prv;
        st *last = *ptr;
	char p[30];
	printf("Enter the name to delete....\n");
	scanf("%s",p);
	int i,j=0,k,b=0;
	int c;
	c = count(*ptr);
	st **a=(st **)malloc(c*sizeof(st *));
	while(last != 0)
	{
		if(strcmp(last->name,p)==0)
		{
			a[j++]=last;
		}
		last = last->next;
	}
	if(j>1)
	{
		for(k=0;k<j;k++)
		{
			printf("%d %s %f\n",a[k]->roll,a[k]->name,a[k]->mark);
		}
		while(b<k-1)
		{
		roll_del(ptr);
		b++;
		}
	}
	else if(j == 1)
	{
		 while(temp!=0)
        	{
                	if(strcmp(temp->name,p)==0)
                	{
                        	if(temp == *ptr)
                                *ptr = temp->next;
                        	else
				{
                                	prv->next = temp->next;
				}
                        		free(temp);
                        		temp = NULL;
                        		return ;
                	}
                	else
                	{
                       		prv = temp;
                        	temp = temp->next;
                	}
        	}
	}
	else
	{
		printf("name doesn't exist to delete");
		return;
	}
}
