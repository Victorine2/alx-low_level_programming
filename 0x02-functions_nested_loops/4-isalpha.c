#include "main.h"

/**
 * _isalpha - checks if its an alphabet
 * @b: character to be checked
 * Return: 1 if its an alphabet, 0 if not
 */

int _isalpha(int b)
{
	if ((b >= 65 && b <= 97) || (b >= 97 && b <= 122))
	{
		return (1);
	}
		return (0);

}
