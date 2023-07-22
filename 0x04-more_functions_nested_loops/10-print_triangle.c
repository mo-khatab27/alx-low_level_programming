#include "main.h"

/**
 * print_triangle - function
 * @size: times
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < size ; i++)
	{
		k = i;
		for (j = 0 ; j < size ; j++)
		{
				if (size - k - 1 > 0)
					_putchar(' ');
				else
					_putchar('#');

				k++;
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
