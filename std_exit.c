#include"header.h"

void std_exit(st *ptr)
{
	char op;
	printf(" _____________________________________________\n");
        printf("|                                             |\n");
        printf("|**************SAVING PURPOSE*****************|\n");
        printf("|_____________________________________________|\n");
        printf("|                                             |\n");
        printf("|      S/s:save and exit                      |\n");
        printf("|      e/E:exit without saving                |\n");
        printf("|_____________________________________________|\n");
        printf("|                                             |\n");
        printf("|***************ENTER THE OPTION**************|\n");
        printf("|_____________________________________________|\n");
	scanf(" %c",&op);
	if((op == 's')||(op == 'S'))
	{
		std_save(ptr);
		printf("student record is saved sucessfully...\n");
	}
	if((op == 'e')||(op == 'E'))
	{
		printf("record is unsaved....\n");
		exit(0);
	}
}
