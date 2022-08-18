#include "main.h"

/**
 * get_endianness - checks is computer is big or little edian
 * Return: 0 or 1
 */

int get_endianness(void)
{
	char num;
	char *ptr;

	num = '1';
	ptr = &num;
	if (*ptr == 0)
		return (0);
	else
		return (1);
}
