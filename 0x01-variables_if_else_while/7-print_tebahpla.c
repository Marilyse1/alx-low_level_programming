#include <stdio.h>

int main(void)
{
    /* Boucle pour imprimer les lettres de 'z' à 'a' */
	char c;
    for (c = 'z'; c >= 'a'; c--)
    {
        putchar(c); 
    }

    putchar('\n'); 

    return (0);
}
