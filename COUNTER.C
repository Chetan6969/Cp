#include<stdio.h>
#include<conio.h>
void main()
{
	int num,counter=0;
	clrscr();

	printf(" Enter the number = \n");
	scanf("%d",&num);

	do
	{
	num=num/10;
	++counter;
	} while(num!=0);
	printf(" Number of digits in this number = %d",counter);


	getch();
}

