#include "main.h"

/**
 * _strcpy - copy the string pointed to by src to dest.
 * @dest: char to check.
 * @src: char to check.
 * Return: 0 is success.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
