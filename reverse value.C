#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,rem,sum=0;
	clrscr();

	printf(" Enter number : ");
	scanf("%d",&num);

	for(i=num;num!=0;num=num/10)
	{
	rem=num%10;
	sum=sum*10+rem;
	}

	printf(" The reverse value is : %d",sum);

	getch();
}
