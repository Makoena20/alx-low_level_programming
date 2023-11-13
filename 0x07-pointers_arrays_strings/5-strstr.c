#include "main.h"

/**
 * _strstr - Finds the first occurrence of a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *needle_ptr = needle;

		/* Check for a substring match */
		while (*haystack && *needle_ptr && *haystack == *needle_ptr)
		{
			haystack++;
			needle_ptr++;
		}

		/* If the entire substring is found, return the start position */
		if (!*needle_ptr)
			return start;

		/* Move to the next character in the haystack */
		haystack++;
	}

	/* If substring is not found, return NULL */
	return NULL;
}

