#include "main.h"
#include <stdio.h>
/**
 * int _strlen - find the lenght of a string
 * and return it in integer form
 * @s: String variable
 *
 * Return: nothing but in mainfile
 */
int _strlen(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		count++	
	}

	return (count);
}
