/*
 * Lioness
 * Auth:Mbugua Wairimu
 */

#include "main.h"

/**
 * flip_bits - Counts number of bits needed to be
 *             flipped to get from one number to another.
 * @n: Number.
 * @m: Number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int idk = n ^ m, bits = 0;

	while (idk > 0)
	{
		bits += (idk & 1);
		idk >>= 1;
	}

	return (bits);
}
