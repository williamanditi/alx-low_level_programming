#include "main.h"

/**
 * clear_bit -function that  sets the value of a given bit to 0
 * @n: pointer to the number to change in a given set
 * @index: index of the bit to  you want to set
 *
 * Return: 1 for success, -1 for failure if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

