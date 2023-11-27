//
// Created by corentin on 27/11/23.
//

#include <stdio.h>

int str_is_digit(char *str)
{
    int i = 0;

    while(str[i] != 0)
    {
        if((int)str[i] > 57 || (int)str[i] < 48)
        {
            return 0;
        }
        i++;
    }
    return 1;
}