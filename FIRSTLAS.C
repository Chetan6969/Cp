#include<stdio.h>
#include<conio.h>
void main()
{
	long long  n,firstdigit,lastdigit;
	clrscr();

	printf(" Enter Number = \n");
	scanf("%lld",&n);

	lastdigit=n%10;

	while(n>=10)
	{
	n=n/10;
	}
	firstdigit = n;

	printf(" First Digit=%lld\n\nLast Digit = %lld",firstdigit,lastdigit);
	getch();
}
