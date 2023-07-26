#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{

	int len;

	len = 0;

	int i;

	i = 0;
	
	while (*(s+i) != 0x00)
	{
		len++;
		i++;
	}

	return len;
}
