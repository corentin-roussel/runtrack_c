//
// Created by corentin on 27/11/23.
//

#include <unistd.h>
#include <stdio.h>

int my_strlen(char *str)
{
    int i = 0;

    while(str[i] != 0)
    {
        i++;
    }
    return i;
}

int main (int argc, char **argv)
{

    int len = my_strlen("Hello World!");

    return 0;
}