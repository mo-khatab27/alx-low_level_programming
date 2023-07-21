#include "main.h"

/**
 * more_numbers - function
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10  ; i++)
	{
		k = 0;

		for (j = 0  ; j < 15 ; j++)
		{
			if (j > 9)
			{
				k = 10;

				_putchar(49);
			}
			_putchar(j - k + 48);
		}
		_putchar('\n');
	}
}
