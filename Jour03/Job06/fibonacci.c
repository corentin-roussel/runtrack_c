//
// Created by corentin on 29/11/23.
//

#include <unistd.h>
#include <stdio.h>

int fibonnaci(int num)
{

    int x,y,z;

    while(1)
    {
        x = 0;
        y = 1;

        do {
            printf("%d", x);

            z = x + y;

            x = y;

            y = z;
        } while (x < num);
    }
}

int main(int argc, char **argv)
{
    int fib = fibonnaci(255);
    return 0;
}