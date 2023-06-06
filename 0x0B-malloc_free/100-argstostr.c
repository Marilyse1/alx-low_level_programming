#include <stdlib.h>
#include <stddef.h>

/**
* argstostr - Concatenates all the arguments of the program
* @ac: The number of arguments
* @av: Array of arguments
*
* Return: Pointer to the concatenated string, or NULL if it fails
* Each argument is followed by a '\n' in the new string
*/
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j, k;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length needed for the final string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
total_length++;
}
total_length++;
}

/* Allocate memory for the final string */
str = (char *)malloc((total_length + 1) * sizeof(char));
if (str == NULL)
return (NULL);

/* Copy the arguments into the final string */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';

return (str);
}
