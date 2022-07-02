#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char Alphabet;

	for (Alphabet = 122; Alphabet >=97; Alphabet--)
	{
		putchar(Alphabet);
	}

	putchar('\n');
	return (0);
}
