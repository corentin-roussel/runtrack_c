//
// Created by corentin on 27/11/23.
//


int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    int num =  0;

    while(s1[i] != 0)
    {
        if(s1[i] != s2[i])
        {
            num = (int)s1[i] - (int)s2[i];
            if(num < 0)
            {
                return num;
            }else if (num > 0)
            {
                return num;
            }
        }
        i++;
    }
    return num;
}