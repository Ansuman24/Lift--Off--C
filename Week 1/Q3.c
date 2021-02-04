#include<stdio.h>
#include<conio.h>
void main()
{
	float r,circum=0,area=0,dia=0;
	printf("enter the radius of the circle");
	scanf("%f",&r);
	circum=2*(3.14)*r;
	area=3.14*(r*r);
	dia=2*r;
	printf("the value of circumference is %f\n",circum);
	printf("the value of area is %f\n",area);
	printf("the value of diameter is %f\n",dia);
	getch();
}
