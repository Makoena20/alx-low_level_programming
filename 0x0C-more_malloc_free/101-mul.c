#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: a pointer to the product of num1 and num2
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int i, j, k, carry, n1, n2, sum;
	char *result;

	result = calloc(len1 + len2 + 1, sizeof(char));
	if (!result)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		if (!_isdigit(num1[i]))
		{
			free(result);
			return (NULL);
		}

		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1, k = len1 - i - 1; j >= 0; j--, k++)
		{
			if (!_isdigit(num2[j]))
			{
				free(result);
				return (NULL);
			}

			n2 = num2[j] - '0';
			sum = n1 * n2 + result[k] + carry;
			carry = sum / 10;
			result[k] = sum % 10;
		}

		if (carry)
			result[k++] += carry;
	}

	for (i = k - 1; i >= 0; i--)
		result[len1 + len2 - i - 1] = result[i] + '0';

	result[len1 + len2] = '\0';

	return (result + (result[0] == '0'));
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	result = mul(argv[1], argv[2]);
	if (!result)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}
