#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
    char *haystack_ptr;
    char *needle_ptr;

    while (*haystack != '\0')
    {
        haystack_ptr = haystack;
        needle_ptr = needle;

        while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0' && *haystack_ptr != '\0')
        {
            haystack_ptr++;
            needle_ptr++;
        }

        if (*needle_ptr == '\0')
        {
            return (haystack);
        }

        haystack++;
    }

    return (NULL);
}
