//
// Created by corentin on 29/11/23.
//

#include <unistd.h>

int num_length(int num)
{
    int i = 0;
    while(num != 0)
    {
        num = num/10;
        i++;
    }

    return i;
}

int my_atoi(char *str)
{
    int i = 0;
    int ascii = 0;

    while(str[i] != '\0')
    {
        ascii = ascii * 10 + (str[i] - '0');
        ++i;
    }
    return ascii;
}

int factorial(int num)
{

    int result = 1;
    while(num > 0)
    {
        result = result * num;
        num--;
    }
    return result;
}

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        return 0;
    }
    int num = my_atoi(argv[1]);

    int fac = factorial(num);
    //char write_fac = my_itoa(fac);

    int fac_size = num_length(fac);

    write(1, &fac, fac_size);
    return 0;
}