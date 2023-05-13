#include <unistd.h>
#include "main.h"
/**
 * cap_string - capitalizes letters after separators
 * @n: string to be capitalized
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] < 'z')
		{
			if (n[i - 1] >= 32 && n[i - 1] <= 34)
				n[i] = n[i] - 32;
			else if (n[i - 1] == 40 || n[i - 1] == 41)
				n[i] = n[i] - 32;
			else if (n[i - 1] == 44  || n[i - 1] == 46)
				n[i] = n[i] - 32;
			else if (n[i - 1] == 59 || n[i - 1] == 63)
				n[i] = n[i] - 32;
			else if (n[i - 1] == 123 || n[i - 1] == 125)
				n[i] = n[i] - 32;
			else if (n[i - 1] == 10 || n[i - 1] == 9)
				n[i] = n[i] - 32;
			else if (n[i - 1] == 11)
				n[i] = n[i] - 32;
		}
	}
	return (n);
}
