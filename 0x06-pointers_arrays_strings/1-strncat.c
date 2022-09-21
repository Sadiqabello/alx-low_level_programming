#include "main.h"

/**
 * _strncat - conctenates n number of character from a string
 * @dest: destination string
 * @src: source string
 * @n: number of character
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int dest_len = 0;

	while (dest[x++])
		dest_len++;
	for (x = 0; src[x] && x < n; x++)
		dest[dest_len++] = src[x];
	return (dest);
}
