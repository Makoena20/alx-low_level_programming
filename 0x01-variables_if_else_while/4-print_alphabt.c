#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase, excluding 'q' and 'e'
 * using the putchar function only twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        if (letter != 'e' && letter != 'q')
        {
            putchar(letter);
        }
        letter++;
    }

    putchar('\n');
    return (0);
}

