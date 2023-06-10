#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of coins needed for change
 * @argc: argument count
 * @argv: array of argument
 * Return: 0 on sucess and 1 on failure
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		coins++;
		if (cents - 25 >= 0)
		{
			cents -= 25;
			continue;
		}
		if (cents - 10 >= 0)
		{
			cents -= 10;
			continue;
		}
		if (cents - 5 >= 0)
		{
			cents -= 5;
			continue;
		}
		if (cents - 2 >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
