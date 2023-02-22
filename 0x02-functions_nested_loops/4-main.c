#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int r;

    r = isalpha('H');
    printf("%d", r);
    r = isalpha('o');
    printf("%d", r);
    r = isalpha('l');
    printf("%d", r);
    r = isalpha(';');
    printf("%d", r);
    printf("\n");
    return (0);
}
