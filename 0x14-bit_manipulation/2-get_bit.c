#include "main.h"

/**
 *
 * get_bit - returns bit
 * @index: input
 * @n: input
 * Return bit value
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int nm = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	nm <<= index;

	if (nm & n)
		return (1);

	else
		return (0);
}
