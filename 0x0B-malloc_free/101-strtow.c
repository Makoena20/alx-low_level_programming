#include <stdlib.h>

/**
 * count_words - Count the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * strtow - Split a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    char **words;
    int word_count, i, j, k, len, in_word;

    if (str == NULL || *str == '\0')
        return NULL;

    word_count = count_words(str);

    if (word_count == 0)
        return NULL;

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    in_word = 0;
    j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            len = 0;
            k = i;
            while (str[k] != ' ' && str[k] != '\0')
            {
                len++;
                k++;
            }

            words[j] = malloc((len + 1) * sizeof(char));
            if (words[j] == NULL)
            {
                for (k = 0; k < j; k++)
                    free(words[k]);
                free(words);
                return NULL;
            }

            for (k = 0; k < len; k++)
                words[j][k] = str[i + k];
            words[j][k] = '\0';
            j++;
            i += len - 1;
        }
    }

    words[j] = NULL;

    return words;
}

