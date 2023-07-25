#include "main.h"

/**
 * rev_string - function
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;

	for (i = 0  ; ; i++)
	{
		if (s[i] == '\0')
			break;
		_putchar(s[i]);
	}

	_putchar('\n');

	for (j = i ; j > 0 ; j--)
		_putchar(s[j - 1]);

	_putchar('\n');
}
