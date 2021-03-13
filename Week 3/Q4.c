#include<stdio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("enter a number - ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("the factorial value of %d = %d",n,fact);
	return 0;
}
int factorial(int x)
{
	if(x==0)
	{
		return(1);
	}
	else
	{
		return(x*factorial(x-1));
	}
}
