#include "main.h"

/**
 * _islower - func to define if the char is lower case or not
 * @c: checked parameter
 * Return: returns 0 if it is uppercase otherwise returns 1
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
