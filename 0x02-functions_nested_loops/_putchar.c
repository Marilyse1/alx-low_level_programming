#include "main.h"
#include <unistd.h>

char _putchar(char c)
{
    /* Votre code pour imprimer un caractère à l'aide de la sortie standard */
    /* Par exemple, sur un système UNIX-like, vous pouvez utiliser write() */
    return write(1, &c, 1);
}
