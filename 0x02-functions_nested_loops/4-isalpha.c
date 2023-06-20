#include "main.h"
/**
 * _isalpha - is alphabet or not
 * @c: character
 * Return:if 1 is alpha and lower if elseis not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
