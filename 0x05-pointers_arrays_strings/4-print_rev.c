#include "main.h"

/**
 * print_rev  - func to reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0 ; ; i++)
		if (s[i] == '\0')
			break;
	for (j = i ; j > 0 ; j--)
		_putchar(s[j - 1]);
	_putchar('\n');
}
