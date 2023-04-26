#include "main.h"

/**
* jack_bauer - Prints every minute of the
*day of Jack Bauer
*/
void jack_bauer(void)
{
int hours, minutes;

/* Loop through all hours (00 to 23) */
for (hours = 0; hours < 24; hours++)
{
/* Loop through all minutes (00 to 59) */
for (minutes = 0; minutes < 60; minutes++)
{
/* Print the hour and minute in the format HH:MM */
_putchar('0' + hours / 10);
_putchar('0' + hours % 10);
_putchar(':');
_putchar('0' + minutes / 10);
_putchar('0' + minutes % 10);
_putchar('\n');
}
}
}
