#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsined int
 * @b: points to a string of 0 & 1
 *
 * return: the converted number
 */


unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

if (b == NULL)
{
return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
{
result = (result << 1) + 0;
}
else if (b[i] == '1')
{
result = (result << 1) + 1;
}
else
{
return (0);
}
}

return (result);
}

