#include <stdio.h>

int main(void)
{
    int num = 48;  /* ASCII value of '0' */

    while (num <= 57)  /* ASCII value of '9' */
    {
        putchar(num);
        num++;
    }
    putchar('\n');
    return (0);
}

