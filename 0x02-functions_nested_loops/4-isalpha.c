#include "main.h"
/**
 * isapha - checks for alphabetic character
 * @C: character  to be  checked
 * Return: 1 if the character is aletter , o therwise 0
 *
 */
int _isalphat(int c)
{
	return (( c>= 'a' && c <= 'z') || ( c >= 'A'  &&  <= 'Z'));
}
