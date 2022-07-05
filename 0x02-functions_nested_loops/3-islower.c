#include "main.h"

/**
  * _islower - for checking og lowercase character
  * @c: will be the character that will be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

