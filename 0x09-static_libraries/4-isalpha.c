#include <unistd.h>
#include "main.h"
/**
 * _isalpha - checks if character is an alphabet
 * @c:character to print out
 * Return:On sucess 1
 * on error(notalphabet) return 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
