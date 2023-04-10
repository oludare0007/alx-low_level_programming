#include "main.h"

/**
*
* clear_bit - make value of a bit to 0
*
* @n: input
* @index: input
* Return: bit
*
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
