//
// Created by corentin on 28/11/23.
//

#include <stdlib.h>
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

    char **copy = malloc(sizeof(char*) *10);

    int x = 0;
    while(x < 9)
    {
        copy[x] = malloc(sizeof(char) *10);
        x++;
    }

    int i = 0;
    int j = 0;
    while(*src)
    {
        if(!blank(*src))
        {
            copy[i][j] = '\0';
            i++;
        }
        while(!blank(*src))
        {
            src++;
        }
        copy[i][j] = *src;
        src++;
        j++;

    }

    return copy;
}

int main(int argc, char **argv)
{
    char *src = "Salut a tous";

    char **splitted = split(src);

    int i = 0;
    while(i < 3)
    {
        printf("%s\n", splitted[i]);
        i++;
        free(splitted[i]);
    }


    return 0;
}