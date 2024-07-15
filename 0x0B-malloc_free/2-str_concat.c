#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to the concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *ptr;
    int i, len1 = 0, len2 = 0;

    /* Calculate length of s1 */
    if (s1 != NULL)
    {
        while (s1[len1] != '\0')
        {
            len1++;
        }
    }

    /* Calculate length of s2 */
    if (s2 != NULL)
    {
        while (s2[len2] != '\0')
        {
            len2++;
        }
    }

    /* Allocate memory for the concatenated string */
    ptr = malloc(sizeof(char) * (len1 + len2 + 1));
    if (ptr == NULL)
    {
        return NULL;
    }

    /* Copy s1 into ptr */
    for (i = 0; i < len1; i++)
    {
        ptr[i] = s1[i];
    }

    /* Copy s2 into ptr */
    for (i = 0; i < len2; i++)
    {
        ptr[len1 + i] = s2[i];
    }

    /* Null-terminate the concatenated string */
    ptr[len1 + len2] = '\0';

    return ptr;
}

