#include "main.h"

/**
 * _strlen  - function
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	int m;

	for (m = 0 ; ; m++)
	{
		if (s[m] == '\0')
		{
			break;
		}
	}
	return (m);
}
