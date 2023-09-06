#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();

	printf(" Enter number \n ");
	scanf("%d",&n);

	printf(" Reverse natural number \n");

	for(i=n;i>=1;i--)
	{
	printf("  %d\n ",i);
	}

	getch();
 }



