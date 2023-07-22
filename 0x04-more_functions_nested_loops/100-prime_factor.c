#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
long int i;
long int j;
long int k;

i = 612852475143;

while (612852475143 % 2 == 0)
{
	j = 2;
	i /= 2;
}
for (k = 3 ; k <= i ; k++)
{
	if (i % k == 0)
	{
		j = k;
	}
}
printf("%ld\n", j);
return (0);
}
