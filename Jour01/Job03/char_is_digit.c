//
// Created by corentin on 27/11/23.
//


#include <stdio.h>

int char_is_digit(char c)
{

    int number[] = {48, 49, 50, 51, 52, 53, 54, 54, 55, 56, 57};

    int i = 0;

    while (number[i] != 0)
    {
        if((int)c == number[i])
        {
            return 1;
        }
        i++;
    }

    return 0;
}

void main(int argc, char **argv)
{
    printf("%d",char_is_digit('3'));

}