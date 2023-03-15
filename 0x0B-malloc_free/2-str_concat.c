#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: the two strings concatenated
 */

int _strlen(char *s)

{
unsigned int i;

i = 0;
while (s[i] != '0')
{
i++;
}
return (i);

}

/**
 * str_concat - back a pointer to array
 * @s1: Array one
 * @s2: array two
 * return: always an array
 */

char *str_concat(char *s1, char *s2)
{
char *dst;
unsigned int i, j, size;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size = (_strlen(s1) + strlen(s2) + 1);

dst = (char *) malloc(size * sizeof(char));
if (dst == 0)
{
return (NULL);
}

for (i = 0; *(s1 + 1) != '\0'; i++)
*(dst + 1) = *(s1 + 1);

for (j = 0; *(s2 + j) != '\0'; j++)
*(dst + i) = *(s2 + j);
i++;

return (dst);

}
