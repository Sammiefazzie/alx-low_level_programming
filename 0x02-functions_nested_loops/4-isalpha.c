#include "main.h"
/**
 * _isalpha - Check alphabetic character
 * @c: The character to be checked
 * Return: 1 fo alphabetic character or 0for anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
