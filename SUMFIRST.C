#include<stdio.h>
#include<conio.h>
void main()
{
	long long  n,first,last;
	clrscr();

	printf(" Enter Number = \n");
	scanf("%lld",&n);
	last=n%10;

	while(n>=10)
	{
	n=n/10;
	}
	first = n;

	printf(" First Digit=%lld\n\nLast Digit = %lld\n\n",first,last);
	printf("Sum first and last=%lld + %lld = %lld",first,last,first+last);
	getch();
}
