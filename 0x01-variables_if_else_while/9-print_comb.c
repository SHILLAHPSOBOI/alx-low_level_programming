#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int no;

	for (no = 48; no <= 57; no++)
	{
		putchar(no);

		if (no == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
