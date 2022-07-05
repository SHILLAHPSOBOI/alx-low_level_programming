#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int number;

	for (number = 0; number < 10; number++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

