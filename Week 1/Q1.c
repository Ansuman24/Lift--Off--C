#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add=0,sub=0,mul=0,div=0,mod=0;
	printf("enter 1st number");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("the value of addition is %d\n",add);
	printf("the value of substraction is %d\n",sub);
	printf("the value of multiplication is %d\n",mul);
	printf("the value of divison is %d\n",div);
	printf("the value of modulus is %d\n",mod);
	getch();
}
