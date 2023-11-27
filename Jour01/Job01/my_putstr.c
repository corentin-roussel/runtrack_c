//
// Created by corentin on 27/11/23.
//

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_pustr(char *str)
{
    int i = 0;

    while(str[i] != 0)
    {
        my_putchar(str[i]);
        i++;
    }
}

int main (int argc, char **argv)
{
    my_pustr("Hello World!");
    return 0;
}