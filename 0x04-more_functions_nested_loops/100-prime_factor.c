#include <stdio.h>
#include <math.h>

/**
 * main - func
 * Return: 0
 */

int main(void)
{
long num = 612852475143;
long largestPrimeFactor = 2;
long factor = 2;

while (num > 1)
{
	if (num % factor == 0)
	{
		num = num / factor;
		largestPrimeFactor = factor;

		while (num % factor == 0)
		{
			num = num / factor;
		}
	}
	factor = factor + 1;
}

printf("%ld\n", largestPrimeFactor);
return (0);
}
