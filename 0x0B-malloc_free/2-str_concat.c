#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
* str_concat - concatenates two strings of any size
* @s1: the first string to concatenate
* @s2: the second string to concatenate
* Return: pointer to the newly allocated memory
*/

char*str_concat(char *s1, char *s2)
{

unsigned int len1, len2, size, i, j;
char*nstr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = 0;
while (s1[len1] != '\0')
len1++;

len2 = 0;
while (s2[len2] != '\0')
len2++;

size = len1 + len2;

nstr = malloc((sizeof(char) * size) +1);
if (nstr == NULL)
return (NULL);

i = 0;
while (i < len1)
{
nstr[i] = s1[i];
i++;
}

j = 0;
while (j <= size)
nstr[j] = s2[j];
i++;
j++;


return (nstr);


}
