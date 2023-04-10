/*
 * Lioness!
 * Auth: Mbugua Wairimu
 */

#include "main.h"

/**
 * get_bit - aquires value of a bit at any given index.
 * @n: bit.
 * @index: Index to get the value at - indices starting from 0.
 *
 * Return: Upon error - -1.
 *         Otherwise - Value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
