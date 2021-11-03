#include "main.h"
/**
 * _atoi - This fuction only prints half of a string
 * @s:  is the pointer to the  source array
 * Return: is value of the integer
 */

int _atoi(char *s)
{
	unsigned int aux = 0;
	unsigned int stop = 0;
	int sign = 1, i = 0;
	unsigned int m = 0;
	unsigned int inAn = 0;

	for (i = 0; s[i]; i++)
		if ((s[i] < '0' || s[i] > '9') && (s[i] != '+' && s[i] != '-'))
			return (-1);
	do {
		if (*(s + aux) == '\0')
			stop = 1;
		else
		{
			if (*(s + aux) == '-')
				sign = sign * (-1);
			if ((*(s + aux) > 57 || *(s + aux) < 48) && inAn == 1)
				return (m * sign);
			if (*(s + aux) > 47 && *(s + aux) < 58)
			{
				inAn = 1;
				m = m * 10;
				m = m + (*(s + aux) - 48);
			}
		}
		aux++;
	} while (stop == 0);
	return (m * sign);
}
