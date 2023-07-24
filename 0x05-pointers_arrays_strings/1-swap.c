#include "main.h"

/**
 * swap_int - function to swap two values
 * @a: first num
 * @b: second num
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
