#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination of concatenates
 * @src: source array of concatenates
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	k = 0;

	while (dest[i] != '\n')
		i++;

	while (src[k] != '\n')
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
