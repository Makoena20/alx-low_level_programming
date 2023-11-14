#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr)
	{
		char *check = alpha;
		char *rot_check = rot13;
		int i = 0;

		while (*check)
		{
			if (*ptr == *check)
			{
				*ptr = rot_check[i];
				break;
			}
			check++;
			rot_check++;
			i++;
		}
		ptr++;
	}

	return str;
}

