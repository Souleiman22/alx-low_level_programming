<<<<<<< HEAD
#include"main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
 */

=======
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
>>>>>>> 34e8a3fb8654b2d86038af01ce7a2e6431860121
void _puts(char *str)
{
	while (*str != '\0')
	{
<<<<<<< HEAD
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
=======
		_putchar(*str++);
	}
		_putchar('\n');
>>>>>>> 34e8a3fb8654b2d86038af01ce7a2e6431860121
}
