#include<stdio.h>
#include<conio.h>

int imprint(int x)
{
	putch(x);
}

int print_asciz(char string[], int size)
{
	int x=0;
	for(;x<size;x++)
	{
		imprint(string[x]);
	}
}

int sys_goto(int x)
{
	int osmode=(x);
	msg_system(x);
	exit(x);
}
