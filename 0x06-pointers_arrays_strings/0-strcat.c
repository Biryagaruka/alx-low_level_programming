#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation.
 * @src: string to be concatenated.
 * @n: The number of bytes from src to be appended to dest.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
