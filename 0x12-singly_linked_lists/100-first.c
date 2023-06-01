#include <stdio.h>

/**
* before_main - Function executed before main
*
* Description: Prints the desired message before the main function is executed.
*/
void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
