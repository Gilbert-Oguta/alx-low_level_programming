#include <stdio.h>

void Hare(void) __attribute__((constructor));

/**
 * Hare - prints the string before the main
 * function is executed
 */
void Hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
