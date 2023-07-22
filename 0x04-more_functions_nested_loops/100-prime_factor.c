#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	long i;
	long j;

	for (i = 1 ; i <= 306426237572 ; i++)
	{
		if (612852475143 % i == 0)
		{
			j = i;
		}
	}
	printf("%ld\n", j);
	return (0);
}
