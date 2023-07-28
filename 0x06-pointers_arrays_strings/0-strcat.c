#include "main.h"

/**
 * _strcat - pointer func
 * @dest: first word
 * @src: second word
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
int destlen = 0;
int srclen = 0;
int i;

for (i = 0; ; i++)
{
	if (dest[i] == '\0')
		break;
	destlen++;
}
for (i = 0; ; i++)
{
	if (src[i] == '\0')
		break;
	srclen++;
}
for (i = 0; i <= srclen; i++)
	dest[destlen + i] = src[i];
return (dest);
}
