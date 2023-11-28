//
// Created by Aiste on 11/27/2023.
//

#include <stdio.h>

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

    char **copy;
    char *word;
    while(*src)
    {
        while(!blank(*src))
        {
            src++;
        }
        *word = *src;
        src++;
    }
    **copy = word;
    *word;

    return copy;
}

int main(int argc, char **argv)
{
    char *src = " Salut a tous";

    char **splitted = split(src);

    printf("%s", *splitted);


}