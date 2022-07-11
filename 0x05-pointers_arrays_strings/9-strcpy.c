#include "main.h"

/**
 * _strcpy - copies string by src
 * @dest: pointer of a char to be updated
 * @scr: pointer ofa char to be updated
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
