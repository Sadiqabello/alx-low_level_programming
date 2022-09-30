#include <stdio.h>

/**
 * main - prints name followed by a new line and also if the
 * file is renamed, the new name is printed without compiling
 * @argc: number of command line argument
 * @argv: array containing command line arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
