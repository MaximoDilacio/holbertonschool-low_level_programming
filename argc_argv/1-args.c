#include <stdio.h>
/**
 * main - prints the number og argument passed
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
