#include "main.h"

/**
 * _isdigit - Check if a charactor is a digit
 * @x: The number to be checked
 * Return: 1 for a charactor that will be adigit or 0 for any else
 */

int _isdigit(int x)

{

	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
