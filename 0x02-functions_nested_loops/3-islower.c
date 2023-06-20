#include "main.h"

/**
 * _islower - checks if c is a lowercase character
 * @c: The character to be checked.
 * Return: 1 if it is lowercase, 0 if otherwise
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
return (1);
else
return (0);

}
