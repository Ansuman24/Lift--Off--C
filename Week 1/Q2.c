#include<stdio.h>
#include<conio.h>
void main()
{
	float cel,fah;
	printf("enter the temperature in celsius");
	scanf("%f",&cel);
	fah=(cel*9/5)+32;
	printf("the value of conversion in farhanite is %f",fah);
	getch();
}
