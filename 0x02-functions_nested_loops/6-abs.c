#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @v: number to be computed
 * Return: absolute value
 */

int _abs(int v)
{
	if (v < 0)
	{
		int abs_val;

		abs_val = v * -1;
		return (abs_val);
	}
	return (v);
}
