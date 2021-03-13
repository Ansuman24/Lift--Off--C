#include<stdio.h>
int fac(int);
void main()
{
	int n,factorial;
	printf("enter a number - ");
	scanf("%d",&n);
	factorial=fac(n);
	printf("the factorial of the number %d is %d  ",n,factorial);
}
int fac(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}  
