#include<stdio.h>
#include<conio.h>
void main()
{
	int base,expo,i;
	long long power=1;
	clrscr();

	printf(" Enter base : ");
	scanf("%d",&base);
	printf(" Enter exponent : ");
	scanf("%d",&expo);

	for(i=1;i<=expo;i++)
	{
	 power = power*base;
	}

	printf(" The final result is %d power %d = %lld",base,expo,power);
	getch();
}

