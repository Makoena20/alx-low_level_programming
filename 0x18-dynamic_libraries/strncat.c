#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes from src to be concatenated.
 *
 * Return: The pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest;

	while (*dest)
		dest++;

	while (*src && n--)
		*dest++ = *src++;

	*dest = '\0';

	return (cat);
}

