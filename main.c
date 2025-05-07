#include"header.h"
int main()
{
	st*hptr = 0;
	char choice;
	while(1)
	{
		printf(" ________________________________________\n");
		printf("|					 |\n");
		printf("|***********STUDENT RECORD MENU**********|\n");	
		printf("|________________________________________|\n");
		printf("|					 |\n");
        	printf("|   a/A  : add student record		 |\n");
		printf("|   d/D  : delete a record		 |\n");
		printf("|   s/S  : show the list		 |\n");
		printf("|   m/M  : modify a record		 |\n");
		printf("|   v/V  : save a record		 |\n");
        	printf("|   e/E  : exit				 |\n");
		printf("|   t/T  : sort the list		 |\n");
		printf("|   l/L  : delete all the records	 |\n"); 
		printf("|   r/R  :reverse the list		 |\n");
		printf("|					 |\n");	
		printf("|   ENTER THE CHOICE :			 |\n");	
		printf("|________________________________________|\n");
		
		scanf(" %c",&choice);

		switch(choice)
		{
			case 'a':case 'A':std_add(&hptr);break;
		  	case 'd':case 'D':std_del(&hptr);break;
			case 's':case 'S':std_show(hptr);break;
			case 'm':case 'M':std_mod(&hptr);break;
			case 'v':case 'V':std_save(hptr);break;
			case 'e':case 'E':std_exit(hptr);return 0;
			case 't':case 'T':std_sort(&hptr);break;
			case 'l':case 'L':std_delal(&hptr);break;
			case 'r':case 'R':std_rev(&hptr);break;
			default : printf("Invalid choice please check your option\n");break;
		}
	}
}





