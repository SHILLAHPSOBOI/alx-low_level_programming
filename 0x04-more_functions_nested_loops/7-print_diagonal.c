#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: value
 * Return: Always 0
 */
void print_diagonal(int n)
{

	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < 0; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');

		}

	}


	else
	{
		_putchar('\n');
	}

}
