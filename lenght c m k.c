#include<stdio.h>
int main()
{
    float len,mtr,klm;
    

    printf(" Enter len = \n " );
    scanf(" %f ",&len);
    
    
    mtr = len*100;
    printf(" Value in Meter = %f  \n ",mtr);

    klm = len*1000;
    printf(" Value in Kilometer = %f \n ",klm);
    
    return 0;

}

