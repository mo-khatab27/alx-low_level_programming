#include "main.h"

/**
 * _isupper - func to check if the char is uppercase or not
 * @c: checked char
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
