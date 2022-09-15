#include <stdio.h>

/**
 * print_alphabet - print letter of alphabet
 *
 * Return: Always 0 (success)
 *
 */
int print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
