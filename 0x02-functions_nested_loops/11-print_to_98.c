#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all the natural numbers to 98
 * @n: the number from which to start at
 * Return: returns all natural numbers upto 98
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d ", n);
}
}
}
else
{
for (; n <= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d ", n);
}
}
}
}