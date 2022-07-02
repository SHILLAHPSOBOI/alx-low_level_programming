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

	for (no = 27; no <= 38; no++)
	{
		putchar(no);

		if (no == 38)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
