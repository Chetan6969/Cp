#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,sub,mul,dvi,mod;
	char ch;
	clrscr();

	printf("Enter user choice = \n");
	scanf("%c",&ch);
	printf("Enter a = \n");
	scanf("%d",&a);
	printf("Enter b = \n");
	scanf("%d",&b);

	switch(ch)
	{
	case'+':printf("Add = %d",sum);
	break;
	case'-':printf("Substract = %d",sub);
	break;
	case'*':printf("Multipliction = %d",mul);
	break;
	case'/':printf("Divide = %d",dvi);
	break;
	case'%':printf("Modulas =%d",mod);
	break;
	default:printf(" Choose wrong number ");
	break;
	}
	getch();
}










