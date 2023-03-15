#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to string
 * @str: string
 * @chr:
 * return: always 0
 */

char *_strdup(char *str)

{
(void)str;


char *str = "ALX SE";
char *res;

res = strdup(str);


putchar("res");

return (0);


}
