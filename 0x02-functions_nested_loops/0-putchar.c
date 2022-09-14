#include "putchar.h"
/**
 * main - Print "Putchar" follwed by a new line.
 * Description: You are not allowed to use standard libraries.
 * Return: 0
 */
int main(void)
{
	char putchar[] = "Putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
