#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1; /* To store the sign of the number */
	int result = 0; /* To store the final result */
	int i = 0;

	/* Skip leading whitespaces */
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;

	/* Check for the sign of the number */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Calculate the result */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (result > (result * 10 + (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Apply the sign to the result and return */
	return (result * sign);
}

