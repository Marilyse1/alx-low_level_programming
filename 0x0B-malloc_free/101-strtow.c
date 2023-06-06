#include <stdlib.h>
#include <string.h>

int count_words(char *str);

/**
* strtow - Splits a string into words.
* @str: The string to be split.
*
* Return: Pointer to an array of strings (words), or NULL if str is NULL or empty,
*         or if the function fails.
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int len = strlen(str);
int word_count = count_words(str);

char **words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

int i, j, k;
k = 0;

for (i = 0; i < len; i++)
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

/**
* count_words - Counts the number of words in a string.
* @str: The string to be counted.
*
* Return: The number of words in str.
*/
int count_words(char *str)
{
int count = 0;
int i = 0;
int len = strlen(str);

while (i < len)
{
while (str[i] == ' ' && i < len)
i++;
if (i < len && str[i] != ' ')
{
count++;
while (str[i] != ' ' && i < len)
i++;
}
}

return (count);
}
