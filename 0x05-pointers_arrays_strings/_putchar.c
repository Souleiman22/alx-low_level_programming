#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<< HEAD
return (write(1, &c, 1));
=======
	return (write(1, &c, 1));
>>>>>>> d74fcfa70b5568b87a559efbd1714646f4ceae32
}
