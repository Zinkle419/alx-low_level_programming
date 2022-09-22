#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination of concatenates
 * @src: source array of concatenates
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;
	for (i = 0; dest[i] != '\0'; i++)
		;

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}