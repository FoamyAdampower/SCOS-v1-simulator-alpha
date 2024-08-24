#include<stdio.h>

#include"MPROMPT.C"

int main()
{
	int b1=178;
	int b2=177;
	int b3=176;
	int blen=1;

	char greet[] = "SCOS {v1.0.0}";
	int greet_len = sizeof(greet);

//	printf("%c%c%c SCOS {v1.0.0} %c%c%c\n",b1,b2,b3,b3,b2,b1);

	imprint(b1);
	print_asciz(greet, greet_len);
	prmpt();
}
