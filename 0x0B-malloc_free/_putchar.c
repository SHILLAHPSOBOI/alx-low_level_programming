#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char
 *
 * Return: 1 for success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
