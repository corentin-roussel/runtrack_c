//
// Created by corentin on 27/11/23.
//

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main (int argc, char **argv)
{
    my_putchar('c');
    return 0;
}