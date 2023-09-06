#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();

	printf("Enter number \n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf(" %d \n",i);
	sum=sum+i;

	}
	printf(" Sum of all these numbers = %d \n ",sum);

	getch();
}





