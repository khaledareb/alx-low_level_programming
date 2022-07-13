#include "main.h"
#include <stdio.h>

/**
  *_strcat - Concatenated two strings
  * @dest: The destination string
  * @src : source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src);
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	
	for (i = O; src[i] !=0; i++)
	{
		dest[dlen] = src[i]
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
} 
