#include <unistd.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
