#include "main.h"

/**
 * swap_int - swap integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int e = *b;
	int f = *a;
	*a = e;
	*b = f;
}
