#include "main.h"

/**
 * puts2 - func
 * @str: word
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		continue;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
		if (i > j)
			break;
	}
	_putchar('\n');
}
