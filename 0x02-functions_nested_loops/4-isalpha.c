#include "main.h"
/**
 * _isalpha - checks for lowercase or uppercase character
 *
 * Return:1 for lowercase or uppercase or 0 for anything else
 */
int _isalpha(int c)
{
if (((c = 97 && c <= 122) || (c = 65 	&& c <= 90)))
{
	return (1);
}
return (0);
}
