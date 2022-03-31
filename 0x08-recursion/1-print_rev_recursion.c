#include "main.h"

/**
 * _print_rev_recursion - function that print string in reverse
 * @s: string that is printed
 */

void _print_rev_recursion(char *s)
{
    int len = strlen(s);
    while (len >= 0)
    {
        _putchar(s[len]);
        len--;
    }
    _putchar('\n');
}
