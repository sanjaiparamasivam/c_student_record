#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[20];
	float mark;
	struct student *next;
}st;
void std_add(st **);
void std_del(st **);
void std_show(st *);
void std_mod(st **);
void std_save(st *);
void std_exit(st *);
void std_rev(st **);
void std_delal(st **);
void std_sort(st **);
