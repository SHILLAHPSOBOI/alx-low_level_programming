#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write new line of code here...
	 * Note that:
	 * - you are not allowed to use variable a and ,
	 * - you are not allowed to modify the variable p
	 * - you can only write one statement
	 * - you are not allowed to code anything else than the line of expected line of code at expected line
	 */
	p[5] = 98;
	/* ...so that the program prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
