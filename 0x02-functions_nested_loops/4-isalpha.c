#include "main.h"

/**
 * _isalpha - func to detect if the char is alpha or not
 * @c: the checked char
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
