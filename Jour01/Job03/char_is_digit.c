//
// Created by corentin on 27/11/23.
//


#include <stdio.h>

int char_is_digit(char c)
{
    if((int)c < 48 || (int)c > 57)
    {
        return 0;
    }
    return 1;
}