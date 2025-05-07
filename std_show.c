#include"header.h"

void std_show(st *ptr)
{

	if(ptr == NULL)
	{
		printf("student record is empty\n");
		return;
	}
	while(ptr !=NULL)
	{
		printf("%d\t  %s\t  %.2f\n",ptr->roll,ptr->name,ptr->mark);
		ptr = ptr->next;
	}
}
