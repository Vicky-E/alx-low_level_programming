#include <unistd.h>
#include "main.h"
/**
 * _strncpy - copies string upto n byte
 * @dest: string to be copied to
 * @src:string to be copied
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
        int l = 0;

        while (src[i] != '\0')
        {
		i++;
        }
        for (l = 0; l != '\0'; l++,i++)
	{
		if (l == n)
			break;
		dest[l] = src[i];
	}
        return (dest);
}
