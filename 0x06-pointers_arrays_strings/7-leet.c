#include <unistd.h>
#include "main.h"
/**
 * leet - encodes program in 1337
 * @n: string to be encoded
 * Return: n
 */
char *leet(char *n)
{
	int j = 11;
	int i;

	char array[11] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char array_2[11] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (n[i] == array[j])
				n[i] = array_2[j];
		}
	}
	return (n);
}
