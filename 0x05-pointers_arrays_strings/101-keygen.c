#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
int r = 0, c = 0;
time_t t;
srand((unsigned int) time(&t));
while (c < 2772)
{
r = rand() % 128;
if ((c + r) > 2772)
break;
c = c + r;
printf("%c", r);
}
printf("%c\n", (2772 - c));
return (0);
}
=======

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;
	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}


	return (0);
}

>>>>>>> d74fcfa70b5568b87a559efbd1714646f4ceae32
