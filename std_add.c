#include"header.h"
int roll(st *);
void std_add(st **ptr)
{
	st *temp = (st*)malloc(sizeof(st));
	printf("Enter the name & mark....\n");
	scanf("%s %f",temp->name,&temp->mark);
	temp->roll = roll(*ptr);
	if((*ptr == 0)||(temp->roll<(*ptr)->roll))
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else
	{
		st *last = *ptr;
		while((last->next !=0)&&(temp->roll>last->next->roll))
		{
			last = last->next;
		}
		temp->next = last->next;
		last->next = temp;
	}
}
int roll(st *ptr)
{
	st *temp = ptr;
	int roll=1;
	while(temp !=0)
	{
		if(temp->roll == roll)
			roll++;
		temp = temp->next;
	}
	return roll;
}
