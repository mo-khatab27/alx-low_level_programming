#include "main.h"

/**
 * reverse_array - func to reverse nums
 * @a: array of int
 * @n: divide
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int p;

	for (j = 0 ; j < n / 2 ; j++)
	{
		p = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = p;
	}
}
