#include <unistd.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer if substring found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, len = 0;

	while (needle[j] != '\0')
	{
		len++;
		j++;
	}
	if (*needle == 0)
		return(haystack);
	while (*haystack != '\0')
	{
		for (i = 0, j = 0; haystack[i] == needle[j];)
		{
			i++;
			j++;
			if (j == len)
			{
				return (haystack);
				break;
			}
		}
		if (haystack[i] != needle[j])
			haystack++;
	}
	return (NULL);
}
