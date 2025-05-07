#include"header.h"

void std_delal(st **ptr)
{
	st *temp = *ptr;
	if(*ptr == 0)
	{
		printf("The student record is empty......\n");
		return;
	}
	else
	{
		while(*ptr != 0)
		{
			*ptr = temp->next;
			free(temp);
			temp = *ptr;
		}
		printf("Deleted all student records....\n");
	}
}
