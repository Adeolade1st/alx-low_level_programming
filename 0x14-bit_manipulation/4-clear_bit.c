#include "main.h"

/**
 * clear_bit - function that set the value of bit to 0
 * @n: bit
 * @index: index from 0
 * reurn: 1 if successful, -1 if failed
 */



int clear_bit(unsigned long int *n, unsigned int index)

{

if (index >= sizeof(unsigned long int) * 8)
{

return (-1);
}

*n &= ~(1UL << index);

return (1);

}

