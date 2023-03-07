#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - Function that compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 */

int _strcmp(char *s1, char *s2)

{

s1 = "Hello";
s2 = "World!";

printf("%d\n", _strcmp(s1, s2));
printf("%d\n", _strcmp(s2, s1));
printf("%d\n", _strcmp(s1, s1));

return (0);


}
