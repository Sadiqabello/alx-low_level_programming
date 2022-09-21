#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if s1 == s2; negative if s1<s2 and positive is s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int d = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			d = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			d = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (d);
}
