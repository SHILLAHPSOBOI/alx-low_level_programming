#include "main.h"

/**
 * jack_bauer - prints every minute of a day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int m;
	int n;

	for (m = 0; m <= 23; m++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
