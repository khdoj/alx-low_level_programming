#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{

for (; *str != '\0'; str++)
{
putchar(*str);
}

putchar('\n');
}
