#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Imprime des valeurs de
* différents types selon le format spécifié.
* @format: La liste des types d'arguments passés à la fonction.
*
* Description :
* Cette fonction prend un nombre variable d'arguments de types différents
* et les imprime selon le format spécifié. Les types supportés sont :
* - c : char
* - i : integer
* - f : float
* - s : char * (si la chaîne est NULL, elle est imprimée comme (nil))
* Les autres caractères du format sont ignorés. Une nouvelle ligne est
* imprimée à la fin de la fonction.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char current_format;

va_start(args, format);

while (format && format[i])
{
current_format = format[i];

switch (current_format)
{
case 'c':
printf("%c", va_arg(args, int));
break;

case 'i':
printf("%d", va_arg(args, int));
break;

case 'f':
printf("%f", va_arg(args, double));
break;

case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;

default:
i++;
continue;
}

if (format[i + 1] != '\0')
printf(", ");

i++;
}

printf("\n");

va_end(args);
}
