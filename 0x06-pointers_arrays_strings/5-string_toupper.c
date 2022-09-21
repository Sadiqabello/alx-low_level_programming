#include "main.h"
/**
 * string_toupper - changes lower case characters of a string to uppercase
 * @str: string
 * Return: return value
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

