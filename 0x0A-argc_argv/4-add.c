#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: The number of arguments passed
* @argv: An array of pointers to the arguments passed
*
* Return: 0 if successful, 1 if an error occurred
*/
int main(int argc, char *argv[])
{
int i, j, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
