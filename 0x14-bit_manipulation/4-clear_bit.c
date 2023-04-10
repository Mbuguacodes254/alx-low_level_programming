/*
 * Lioness
 * Auth: Mbugua Wairimu
 */

#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: Pointer to bit.
 * @index: Index to set the value at - indices starting from 0.
 *
 * Return: Upon error - -1.
 *         If it works - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
