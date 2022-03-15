#include "main.h"

/**
*test_isalpha - checks for alphabetic character
* @c: the character to be checked
* Return: 1 if c is a letter, 0 otherwise
*/
int test_isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
