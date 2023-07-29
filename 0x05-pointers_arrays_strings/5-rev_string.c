#include "main.h"

/**
 * rev_string - function
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char p[10];

	for (i = 0  ; i < 9 ; i++)
	{
		p[i] = s[8 - i];
	}
	for (i = 0 ; i < 9 ; i++)
	{
		s[i] = p[i];
	}
}
