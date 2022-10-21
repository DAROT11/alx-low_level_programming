#include <unistd>
#include "main.h"

/**
 * _putchar - write the character c to the stdout
 * @c: the charcater to print
 * Return: on success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
