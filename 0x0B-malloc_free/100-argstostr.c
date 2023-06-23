#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	av = malloc(sizeof(char *) * ac);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++,j++)
	{
		av[j] = av[i] + av[i + 1);
		printf("\n");
	}
	return (av);
}
