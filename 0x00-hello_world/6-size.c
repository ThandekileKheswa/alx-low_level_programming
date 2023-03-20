#include <stdio.h>
/**
 * main - it is the main function
 * Return: it is always 0
 */
int main(void)
{
	printf("Size of a char: %ln byte(s)\n",(unsigned long)sizeof(char));
	printf("Size of an int: %ln byte(s)\n",(unsigned long)sizeof(int));
	printf("Size of a long int: %ln byte(s)\n",(unsigned long)sizeof(long int));
	printf("Size of a long long int: %ln byte(s)\n",(unsigned long)sizeof(long long int));
	printf("Size of a float: %ln byte(s)",(unsigned long)sizeof(float));
	return (0);
}
