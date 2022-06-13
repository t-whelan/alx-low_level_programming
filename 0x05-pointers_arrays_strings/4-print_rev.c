#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
	int count = 0;
	while (*(s + count ) != '\0')
        {
		s++;
		count++;
	}
        while (count > 0)
        {
		s--;
		_putchar(*s);
		count--;
	}
        _putchar('\n');
