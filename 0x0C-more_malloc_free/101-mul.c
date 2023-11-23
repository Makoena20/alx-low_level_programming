#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit - Print error message and exit with status 98.
 */
void error_exit(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * is_digit - Check if the string is composed of digits.
 * @str: The input string.
 * Return: 1 if composed of digits, 0 otherwise.
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiply two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = calloc(len1 + len2, sizeof(int));
    if (result == NULL)
        error_exit();

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = result[i + j + 1] + mul;
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    for (i = 0; i < len1 + len2; i++)
    {
        if (result[i] != 0 || i == len1 + len2 - 1)
            break;
    }

    for (; i < len1 + len2; i++)
        printf("%d", result[i]);
    printf("\n");

    free(result);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
        error_exit();

    multiply(argv[1], argv[2]);

    return 0;
}

