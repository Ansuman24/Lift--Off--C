#include<stdio.h>
#include<conio.h>
void main()
{
	int per=0,p=0,c=0,m=0,b=0,comp=0;
	printf("enter the marks obtained in physics");
	scanf("%d",&p);
	printf("enter the marks obtained in chemistry");
	scanf("%d",&c);
	printf("enter the marks obtained in mathematics");
	scanf("%d",&m);
	printf("enter the marks obtained in biology");
	scanf("%d",&b);
	printf("enter the marks obtained in computer");
	scanf("%d",&comp);
	per=(p+c+m+b+comp)/5;
	printf("the overall percentage is %d\n",per);
	if (per>=90)
	printf("the grade is A");
	else if (per>=80 && per<90)
	printf("the grade is B");
	else if (per>=70 && per<80)
	printf("the grade is C");
	else if (per>=60 && per<70)
	printf("the grade is D");
	else if (per>=40 && per<60)
	printf("the grade is E");
	else
	printf("the grade is F");
	getch();
}
