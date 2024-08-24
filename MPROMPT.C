#include<stdio.h>
#include"SYSCALLS.H"
#include"MESSAGER.H"

int prmpt()
{
	int osmode=2;

	int ico_prmpt = 46;//	[DOT] in ascii
	char str_u_input[25];

	while(osmode=2)
	{
		imprint(ico_prmpt);
		fgets(str_u_input, 25, stdin);
//		sys_goto(2);
	}
}
