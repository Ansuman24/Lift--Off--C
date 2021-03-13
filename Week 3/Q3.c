#include<stdio.h>
int gcd(int x,int y);
int main()
{
	int a,b,hcf,lcm;
	printf("enter the values of a & b ");
	scanf("%d %d",&a,&b);
	hcf=gcd(a,b);
	lcm=(a*b)/hcf;
	printf("the gcd is  %d\n",hcf);
	printf("the lcm is %d",lcm);
	return 0;
}
int gcd(int x,int y)
{
	if (y==0)
	{
		return x;
	}
	else
	{
		return gcd(y,x%y);
	}
}
