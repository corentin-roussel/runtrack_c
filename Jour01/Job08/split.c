//
// Created by corentin on 28/11/23.
//

#include <stdlib.h>


int blank(char src)
{
    if(src == '\n')
    {
        return 0;
    }else if(src == '\t')
    {
        return 0;
    }else if(src == '\v')
    {
        return 0;
    }else if(src == '\f')
    {
        return 0;
    }else if(src == '\r')
    {
        return 0;
    }else if(src == ' ')
    {
        return 0;
    }
    return 1;
}


char **split(char *src)
{



    char **copy = malloc(sizeof(char*) * 4);

    int i = 0;
    while(*src)
    {

        int j = 0;

        while(*src && !blank(*src))
        {
            src++;
        }
        while(*src && blank(*src)) {
            src++;
            j++;
        }
        copy[i] = malloc(sizeof(char) * j + 1);
        int tmp = j;
        while (j >= 0) {
            copy[i][j] = *src--;
            j--;
        }
        copy[i][tmp] = 0;
        i++;
        src += tmp+1;
    }
    copy[i] = 0;
    return copy;
}
