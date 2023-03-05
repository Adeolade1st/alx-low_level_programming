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
char s1[20] = "Hello";
char s2[20] = "World";
int length;
int j;

length = 0;

while (s1[length] != '\0')
{
++length;
}

for (j = 0; s2[j] != '\0'; ++j, ++length)
{
s1[length] = s2[j];
}

s1[length] = '\0';

putchar(length);



}
