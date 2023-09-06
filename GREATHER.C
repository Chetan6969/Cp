#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf(" Enter a = \n");
	scanf("%d ",&a);
	printf(" Enter b = \n");
	scanf("%d",&b);
	printf(" Enter c = \n");
	scanf("%d",&c);

	if(a>b&&a>c)
	{
	printf(" A is greather \n");
	}
	else if(b>c&&b>c)
	{
	printf("B is greather \n");
	}
	else
	{
	printf("C is greather ");
	}
	getch();
}







