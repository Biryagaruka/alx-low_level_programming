#include "main.h"

/**
 * _islower -  a function that checks for lowercase character
 *
 * Return: always 0 (success)
 */

int _islower(int c)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
