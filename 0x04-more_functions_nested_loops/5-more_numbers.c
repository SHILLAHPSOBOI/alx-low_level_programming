#include "main.h"
/**
 * more_numbers - prints ten times the number from 0 to 14
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int first;
	int second;
	int result;

	i = 0;
	result = 0;
	while (i < 10)
	{
		while (result <= 14)
		{
			if (result < 10)
			{
				second = result;
			}

			else
			{
				first = result / 10;
				second = result % 10;
				_putchar(first + '0');
			}

			_putchar(second + '0');

			result++;
		}
		i++;
		result = 0;
		_putchar('\n');
	}
}
