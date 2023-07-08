#include <stdio.h>
#include "main.h"

/**
 * main - the function that prints the name of the program.
 * @argc: the number of arguments.
 * @argv: array of arguments.
 *
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);
	return (0);
}
