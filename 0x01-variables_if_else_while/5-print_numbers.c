#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
    char a;

    for (a = '0'; a <= '9'; a++)
    {
        printf("%c", a);
        printf("\n");
    }

    return (0);
}
