#include "main.h"

/**
 * _isdigit -  checks if a character is digit
 * @x: The number is to be checked
 * Return: 1 for a character that would be a digit or 0 for anyelse
 */

int _isdigit(int x)

{
if (x >= 48 && x <= 57)

{
return (1);
}
return (0);

}

