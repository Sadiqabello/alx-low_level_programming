#include <stdio.h>
/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	if (ch != 57)
	{
		putchar(44);
		putchar(32);
	}
	}
		putchar(10);

	return (0);
}
