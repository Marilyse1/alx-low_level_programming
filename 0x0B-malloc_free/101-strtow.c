#include <stdlib.h>
#include <string.h>

/**
* count_words - Counts the number of words in a string
* @str: The input string
*
* Return: The number of words
*/
int count_words(char *str)
{
int count = 0;
int i, len = strlen(str);

for (i = 0; i < len; i++)
{
if (str[i] != ' ')
{
count++;
while (str[i] != ' ' && i < len)
i++;
}
}

return (count);
}

/**
* strtow - Splits a string into words
* @str: The input string
*
* Return: Pointer to an array of strings (words), or NULL if it fails
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int i, j, k, len = strlen(str);
int word_count = count_words(str);

char **words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0, k = 0; i < len; i++)
{
if (str[i] != ' ')
{
int word_len = 0;
for (j = i; str[j] != ' ' && j < len; j++)
word_len++;

words[k] = malloc((word_len + 1) * sizeof(char));
if (words[k] == NULL)
{
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}

for (j = 0; j < word_len; j++, i++)
words[k][j] = str[i];
words[k][j] = '\0';
k++;
}
}

words[k] = NULL;
return (words);
}
