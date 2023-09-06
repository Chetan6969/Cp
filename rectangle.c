#include<stdio.h>
int main()
{
    float radious,diameter,circum,area,pi=3.14;
    printf(" Enter  radious \n ");
    scanf(" %f ",&radious);
 
    diameter = radious/2;
    printf(" Diameter = %f",diameter);

    circum = 2*pi*radious;
    printf(" Circucmference = %f \n",circum);

    area = pi*radious*radious;
    printf(" Area Of Tringle = %f ",area);

    return 0;
    
    
}