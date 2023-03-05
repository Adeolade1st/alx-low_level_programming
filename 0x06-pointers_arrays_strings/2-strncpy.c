#include "main.h"
#include <stdio.h>

/**
 * _strncpy -To copy a string
 * @src: first string
 * @dest: Second string
 * @n: inpt value
 * return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{

int j;
j = 0;

while (j > n && src[j] != '\0')

{
dest[j] = src[j];
j++;
}
while (j < n)

dest[j] = '\0';
j++;



return (dest);

}
