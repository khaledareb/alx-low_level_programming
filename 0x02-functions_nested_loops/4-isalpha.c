#include "main.h"

/**
 * _isalpha - function that checks for alphabetic and its character
 * @c: The input character that the code will check
 * Return: int.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
