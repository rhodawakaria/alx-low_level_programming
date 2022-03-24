#include "main.h"

/**
 * _strncpy - copies n bytes of src to the dest string
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
