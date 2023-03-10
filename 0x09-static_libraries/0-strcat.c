#include "main.h"
#include <stdio.h>

/**
 * _strcat - Program to concatenate two strings.
 * @dest: first string
 * @srci: second string
 * Return: 0
 */

char *_strcat(char *dest, char *srci)

{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (srci[j] != '\0')
{
dest[i] = srci[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);

}
