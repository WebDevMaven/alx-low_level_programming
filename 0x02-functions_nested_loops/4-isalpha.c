#include "main.h" 

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: The input character to check
 * Return: int.
 */
int isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    else
        return 0;
}
