#include "main.h"
<<<<<<< HEAD
=======
#include <stddef.h>

>>>>>>> 34e8a3fb8654b2d86038af01ce7a2e6431860121
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
