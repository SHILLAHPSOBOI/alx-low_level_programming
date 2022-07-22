#include <stdio.h>
#include "main.h"

/**
 * main - prints no of arguments passed to the program
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: Alway 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
