#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints if number is positive, zero or negative.
 * Return: Always (Success)
 */

int main(void)
{
int n, last_num;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_num = n % 10;

if (last_num > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, last_num);
}
else if (last_num == 0)
{
printf("last digit of %d is %d and is 0\n", n, last_num);
}
else (last_num < 6 && last_num != 0)
printf("last_num of %d is %d and is less than 6 and not equal to 0\n", n, last_num);
}

return (0);
}
