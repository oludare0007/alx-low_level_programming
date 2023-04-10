#include "main.h"

/**
 * function that converts a binary number to an unsigned int
 *
 * @b: pointer input
 * Return: usigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c_num = 0;
	unsigned int k;

	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if  (b[k] == '0')
			c_num = (c_num << 1) + 0;
		else if (b[k] == '1')
			c_num = (c_num << 1) + 1;
		else
			return (0);
	}
	return (c_num);
}
