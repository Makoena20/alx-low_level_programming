#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, sum, rand_num;
    char password[100];

    srand(time(0));

    sum = 2772; /* Sum of ASCII values of characters in the target password */

    for (i = 0; sum > 126; i++)
    {
        rand_num = rand() % (126 - 32) + 32; /* ASCII range from 32 to 126 */
        password[i] = rand_num;
        sum -= rand_num;
    }

    password[i] = sum;

    printf("%s\n", password);

    return 0;
}

