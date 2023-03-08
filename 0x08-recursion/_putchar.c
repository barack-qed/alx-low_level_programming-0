#include <unistd.h>

/**
 * My _putchar
 */

int _putchar(char c)
{
	return write (STDOUT_FILENO, &c, 1);
}
