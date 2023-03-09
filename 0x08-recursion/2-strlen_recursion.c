#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns length of string
 * @s: string to be returned
 * return: string
 */

int _strlen_recursion(char *s)

{

int count;

if (*s == '\0')
return (0);


count = 1 + _strlen_recursion(s + 1);


return (count);

}
