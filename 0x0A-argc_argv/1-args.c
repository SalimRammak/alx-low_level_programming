#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: nbr of cmd line args
 * @argv: array of cmd line args
 * Return: o if success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
