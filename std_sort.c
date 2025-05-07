#include"header.h"

void name_sort(st **);
void perc_sort(st **);
int count(st *);
void std_sort(st **ptr)
{
	printf(" _____________________________________________\n");
        printf("|                                             |\n");
        printf("|*********Enter the sorting method************|\n");
        printf("|_____________________________________________|\n");
        printf("|                                             |\n");
        printf("|      n/N:sort with name                     |\n");
        printf("|      p/P:sort with percentage               |\n");
        printf("|_____________________________________________|\n");
        printf("|                                             |\n");
        printf("|***************ENTER THE OPTION**************|\n");
        printf("|_____________________________________________|\n");
	char op;
	scanf(" %c",&op);
	switch(op)
	{
		case 'n':case 'N':name_sort(ptr);break;
		case 'p':case 'P':perc_sort(ptr);break;
		default :printf("Option in incorrect...\n");break;
	}

}
void name_sort(st **ptr)
{
	st *temp;
	int i,j,k;
	int c = count(*ptr);
	st **a=(st**)malloc(c*sizeof(st*));
	for(k=0;k<c;k++)
	{
		a[k] = *ptr;
		*ptr = (*ptr)->next;
	}
		for(i=0;i<c-1;i++)
		{
			for(j=0;j<c-1-i;j++)
			{
				if((strcmp(a[j]->name,a[j+1]->name))>0)
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		(*ptr)=a[0];
		for(i=0;i<c;i++)
		{
			a[i]->next = a[i+1];
		}
		a[i-1]->next = 0;
		free(a);
		printf("name sorting is sucessful...\n");
}
void perc_sort(st **ptr)
{
	st *temp;
	int i,j,k;
	int c = count(*ptr);
	st **b = (st **)malloc(c*sizeof(st *));
	for(k=0;k<c;k++)
	{
		b[k] = *ptr;
		*ptr = (*ptr)->next;
	}
	for(i=0;i<c-1;i++)
	{
		for(j=0;j<c-1-i;j++)
		{
			if((b[j]->mark)<(b[j+1]->mark))
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
	(*ptr) = b[0];
	for(i=0;i<c;i++)
	{
		b[i]->next = b[i+1];
	}
	b[i-1]->next = 0;
	free(b);
	printf("mark sorting is sucessful....\n");
}
int count(st *ptr)
{
	int count=0;
	while(ptr!=0)
	{
		count++;
		ptr = ptr->next;
	}
	return count;
}
