#include<stdio.h>
#include<stdio.h>
void main()
{
    float cel,fr;
    clrscr();

    printf(" Enter tempreture in celcious = \n " );
    scanf(" %f ",&cel);


    fr = (cel*9/5)+32;
    printf(" Tempreture in Fahrenheit = %f  \n ",fr);

    getch();

}

