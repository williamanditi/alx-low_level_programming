#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: numberthat is going to be search
 * @index: index of the bit that you want to get
 *
 * Return: value of a bit index 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

