#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words of.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int count = 0, i = 0;

    while (str[i])
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
        i++;
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if str == NULL or str == "".
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, j = 0, k = 0, len = 0, count = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    count = count_words(str);
    words = malloc(sizeof(char *) * (count + 1));
    if (words == NULL)
        return (NULL);

    while (str[i])
    {
        if (str[i] != ' ')
        {
            len = 0;
            j = i;
            while (str[j] != ' ' && str[j] != '\0')
            {
                len++;
                j++;
            }
            words[k] = malloc(sizeof(char) * (len + 1));
            if (words[k] == NULL)
            {
                for (i = 0; i < k; i++)
                    free(words[i]);
                free(words);
                return (NULL);
            }
            j = 0;
            while (i < len + k)
            {
                words[k][j] = str[i];
                j++;
                i++;
            }
            words[k][j] = '\0';
            k++;
        }
        else
            i++;
    }
    words[k] = NULL;
    return (words);
}
