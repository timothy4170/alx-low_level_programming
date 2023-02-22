#include <stdio.h>
/**
 * main -print out size data types in C
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %zu byte(S)\n" , sizeof(char));
	printf("Size of int: %zu byte(S)\n" , sizeof(int));

	printf("Size of long int: %zu byte(S)\n" , sizeof(long int));

	printf("Size of long long int: %zu byte(S)\n" , sizeof(long long int));

	printf("Size of a float: %zu byte(S)\n" , sizeof(float));


	return (0);

}

