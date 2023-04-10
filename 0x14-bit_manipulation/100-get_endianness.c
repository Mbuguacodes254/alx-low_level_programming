/*
 * Lioness
 * Auth: Mbugua Wairimu
 */

#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If little-endian - 1.
 *         If big-endian - 0.
 */
int get_endianness(void)
{
	int i = 1;
	char *endian = (char *)&i;

	if (*endian == 1)
		return (1);

	return (0);
}
