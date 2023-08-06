#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> 34e8a3fb8654b2d86038af01ce7a2e6431860121
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
<<<<<<< HEAD
=======

>>>>>>> 34e8a3fb8654b2d86038af01ce7a2e6431860121
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
