#include "main.h"
#include <stdio.h>
/**
 * print_number - a function that prints an integer.
 * @n: number being used to print
 * Return: returns an interger
 */

void print_number(int n)
{
unsigned int k = n;

if (n < 0)
n *= -1;
k = 1;
_putchar('-');
k /= 10;
if (k != 0)
print_number(k);
_putchar((unsigned int) n % 10 + '0');
}
