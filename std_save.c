#include"header.h"

void std_save(st *ptr)
{
		st *temp = ptr;
		FILE *fp = fopen("student.txt","w");
		while(temp != 0)
		{
			fprintf(fp,"%d %s %f\n",temp->roll,temp->name,temp->mark);
			temp = temp->next;
		}
		fclose(fp);
		printf("saved all student record...\n");
}
