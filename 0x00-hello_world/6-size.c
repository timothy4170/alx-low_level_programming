#include <stdio.h>
/**
 * main -print out size data types in C
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

	printf("Size of char: %zu byte(S)\n" , (unsigned long)sizeof(a));
	printf("Size of int: %zu byte(S)\n" , (unsigned long)sizeof(b));

	("Size of long int: %zu byte(S)\n" , (unsigned long)sizeof(c));

	("Size of long long int: %zu byte(S)\n" , (unsigned long)sizeof(d));

	("Size of a float: %zu byte(S)\n" , (unsigned long)sizeof(f);


	return (0);

}

