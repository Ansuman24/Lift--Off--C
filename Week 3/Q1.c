#include<stdio.h>

int func(int);

int main()
{
int n, square;

printf("\n Enter an number : ");
scanf("%d",&n);

square = func(n);

printf("\n Square of no is : %d ", square);

}

int func(int x)
{
return x*x;
}
