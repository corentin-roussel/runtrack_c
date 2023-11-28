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

char **split(char *str)
{
    int i = 0;
    int j = 0;
    char copy[10][50];

    while(*str)
    {
        while(!blank(*str))
        {
            copy[j][i] = '\0';
            str++;
            i = 0;
            j++;
        }
        copy[j][i] = *str;

        i++;
        str++;
    }
return copy;
}

int main(int argc, char **argv)
{
    char *str =  "Salut a tous";

    split(str);
}