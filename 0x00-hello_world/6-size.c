#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
void Data_size(type){
       	printf("size of a" #type ":%zu\n",sizeof(type));
}
int main(void)
{
Data_size(char);
Data_size(int);
Data_size(long int);
Data_size(long long int);
Data_size(float);
	return (0);
}
