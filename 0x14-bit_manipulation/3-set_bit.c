#include "main.h"

/**
* set_bit - function to set a bit to 1
* return: 1 if success and 0 if fail
*/

int set_bit(unsigned long int *n, unsigned int index)

{

if (index >= sizeof(unsigned long int) * 8)

{
return (-1);
}
*n |= (1UL << index);
return (1);
}

