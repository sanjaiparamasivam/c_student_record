#include"header.h"

void name_se(st **);
void perc_se(st **);
void std_mod(st **ptr)
{
	printf(" _____________________________________________\n");
        printf("|                                             |\n");
        printf("|Enter which record to search for modification|\n");
        printf("|_____________________________________________|\n");
        printf("|                                             |\n");
        printf("|      n/N:to search a name 		      |\n");
	printf("|      p/P:percentage based                   |\n");
        printf("|_____________________________________________|\n");
        printf("|                                             |\n");
        printf("|***************ENTER THE OPTION**************|\n");
        printf("|_____________________________________________|\n");
	char option;
	scanf(" %c",&option);
	switch(option)
	{
		case 'n':case 'N':name_se(ptr);break;
	 	case 'p':case 'P':perc_se(ptr);break;
	        default :printf("invalid option please try again...\n");
	}
}
void name_se(st **ptr)
{
    char name[20];
    printf("Enter the name to search\n");
    scanf("%s",name);

    st*last=*ptr;
    st*temp=*ptr;

    st **a=(st**)malloc(sizeof(st*));
    int i=0;
    while(last!=0)
    {
    	if((strcmp(name,last->name)==0))
	{
		a[i++]=last;
	}
       last=last->next;
    }
    if(i == 1)
    {
    	while(temp != 0)
    	{
		if(strcmp(temp->name,name)==0)
		{
    			printf("enter the new name to modify\n");
    			scanf("%s",temp->name);
    			return;
    		}
		else
		temp = temp->next;
	}
    }
    else if(i>1)
    {
	 temp = *ptr;
         int k;
         for(k=0;k<i;k++)
	 {
	  	printf("%d %s %f\n",a[k]->roll,a[k]->name,a[k]->mark);
	 }
         int roll;
	 printf("Enter the roll to modify\n");
      	 scanf("%d",&roll);
	 while(temp!=0)
	 {
       	 	if(temp->roll==roll)
	 	{
			printf("enter the new name\n");
			scanf("%s",temp->name);
         		return;
	 	}
         	else
	 	{
			temp=temp->next;
	 	}
	 }
    }
	else
    		printf("name does not exist to modify...\n");
	return;
}
void perc_se(st **ptr)
{
	st *temp = *ptr;
	st *last = *ptr;
	int i=0,j=0;
	float mar;
	printf("Enter the mark to modify...\n");
	scanf("%f",&mar);
	st **a = (st**)malloc(sizeof(st *));
	while(last != 0)
	{
		if(last->mark == mar)
		{
			a[i++] = last;
		}
		last = last->next;
	}
	if(i == 1)
	{
		while(temp != 0)
		{
			if(temp->mark == mar)
			{
				printf("Enter the new mark to modify..\n");
				scanf("%f",&temp->mark);
				return;
			}
			else
				temp = temp->next;
		}
	}
	else if(i>1)
	{
		temp = *ptr;
		int k;
		for(k=0;k<i;k++)
		{
			printf("%d %s %f\n",a[k]->roll,a[k]->name,a[k]->mark);
		}
		int roll;
		printf("enter the roll number to modify\n");
		scanf("%d",&roll);
		while(temp != 0)
		{
			if(temp->roll == roll)
			{
				printf("Enter the new mark...\n");
				scanf("%f",&temp->mark);
				return;
			}
			else
			{
				temp = temp->next;
			}
		}
	}
	printf("there is no matching marks here...");
	return;
}
