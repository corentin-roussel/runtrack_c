//
// Created by corentin on 29/11/23.
//

#include <stdio.h>

int power(int num, int power)
{
    int i = 0;
    int result = 1;

    while(i<power)
    {
        result = result * num;
        i++;
    }
    return result;
}