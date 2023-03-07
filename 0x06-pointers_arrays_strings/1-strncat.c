#include "main.h"
#include <stdio.h>
/**
 * _strncat - Function to concatenate two strings
 * @dest: First string
 * @src: second string
 * @n: value of input
 */

char *_strncat(char *dest, char *src, int n)
{


dest = "Hello";
src = "World!";

int length, j;

length = 0;
while (dest[length] != '\0')
{
++length;
}


for (j = 0; src[j] != '\0'; ++j, ++length)
{
dest[length] = src[j];
}
dest[length] = '\0';

putchar(length);

return (0);

}
