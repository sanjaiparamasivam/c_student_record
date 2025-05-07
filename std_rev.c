#include"header.h"

void std_rev(st **ptr)
{
	if(*ptr == 0)
	{
		printf("Student record is empty......\n");
		return;
	}
	else
	{
		st *s = 0,*p;
		while(*ptr != 0)
		{
			p = s;
			s = *ptr;
			*ptr = (*ptr)->next;
			s->next = p;
		}
		*ptr = s;
	}
}
