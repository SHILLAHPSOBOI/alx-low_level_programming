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

	for (no = 21; no <= 30; no++)
	{
		putchar(no);

		if (no == 30)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
