#include<stdio.h>
int main()
{
    int base,height;
    float area;

    printf(" Enter base = \n " );
    scanf(" %d ",&base);
    printf(" Enter height =\n ");
    scanf("% d ",&height);
    
    area = (base*height)/2;
    printf(" Area of tringle \n ",area);
    
    return 0;

}

