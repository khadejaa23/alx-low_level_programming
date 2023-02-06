#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
<<<<<<< HEAD
 *		flipped to get from number to another.
=======
 *	       flipped to get from one number to another.
>>>>>>> 7c0662228e7a5c2d15d016c28348388b4cfac1b5
 * @n: The number.
 * @m: The number to flip n to.
 * Rerurn: The necessary number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
