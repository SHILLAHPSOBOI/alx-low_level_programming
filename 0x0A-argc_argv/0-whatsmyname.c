#include <stio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: no of arguments
 * @srgv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argc[])
{
	printf("%s\n", *argv);

	return (0);
}
