#include <stdio.h>
/*
 * main - entry point
 */
int main(void)
{
	int n, *p, a[5];

	a[2] = 1024;
	p = &n;
	/*
	 * write new line of code here...
	 * Note that:
	 * - you are not allowed to use variable a and ,
	 * - you are not allowed to modify the variable p
	 * - you can only write one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	p[5] = 98;
	/* ...so that the program prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
