#include <stdio.h>
/**
 * main - prints numbers from 00 to 99
 *
 * Return: Always 0
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
	for (ones = 0; ones <= 9; ones++)
	{
		putchar(tens + '0');
		putchar(ones + '0');
	if (!(tens == 9 && ones == 9))
	{
																		putchar(',');
																		putchar(' ');
																		}
	}
	}
	putchar('\n');

	return (0);
}
