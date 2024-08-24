#include<stdio.h>

int msg_system(int x)
{
	switch(x)
	{
		case 1:
			printf("[SYSTEM] Going to mode 1. (SHUTDOWN)\n");
			break;
		default:
			break;
	}
}
