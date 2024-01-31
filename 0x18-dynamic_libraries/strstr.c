#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to locate.
 *
 * Return: If needle is found - a pointer to the beginning of the substring.
 *         If needle is not found - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		j = 0;

		while (needle[j] && (haystack[i] == needle[j]))
		{
			i++;
			j++;
		}

		if (!needle[j])
			return (haystack);

		haystack++;
	}

	return (NULL);
}

