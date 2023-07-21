#include "main.h"

/**
 * _isdigit - func to check if the char is digit between 0 to 9
 * @c: checked char
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
