#include "main.h"

/**
 * get_bit - function to return the value of bit
 * @n: bit
 * @index: indexing starting from 0
 * return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}

