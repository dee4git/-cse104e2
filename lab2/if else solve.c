#include<stdio.h>
int main ()
{
    int number = 65;
    if (number <0 || number > 100)
    {
        printf("invalid");
    }
    else if (number >= 80)
    {
        printf("A+");
    }
    else if (number >= 70)
    {
        printf("A");
    }
    else if (number >= 60)
    {
        printf("B");
    }
    else if (number >= 50)
    {
        printf("C");
    }
    else if (number < 40)
    {
        printf("F");
    }

}
