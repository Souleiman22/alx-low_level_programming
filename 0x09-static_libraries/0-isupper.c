#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - checks for uppercase character
 * @letter: the chracter to be tracked
 * Return: 1 if c is uppercase, 0 otherwise
 */



int _isupper(int letter)



{



	return (letter >= 'A' && letter <= 'Z');



=======
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
>>>>>>> 34e8a3fb8654b2d86038af01ce7a2e6431860121
}
