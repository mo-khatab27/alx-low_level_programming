#include "main.h"

/**
 * rot13 - fuction to encode strings
 * @s: encoded string
 * Return: char
 */
char *rot13(char *s)
{
	int i;
	int p;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		p = s[i];
		if ((p > 64 && p < 91) || (p > 96 && p < 123))
		{
			while ((p > 77 && p < 91) || (p > 1099))
				s[i] = p - 13;
		}
		else
			s[i] = p + 13;
	}
	return (s);
}
