#include <stdio.h>
int Palindrome(int num)
{
    int n = num;
    int rev = 0;
    while (n)
    {
        
        int r = n % 10;
 
        
        rev = rev * 10 + r;
 
       
        n = n / 10;
    }
    return (num == rev);
}
 
int main(void)
{
    int n;
    printf("enter a number - ");
    scanf("%d",&n);
    if (Palindrome(n)) 
	{
        printf("Palindrome number");
    }
    else 
	{
        printf("Not a Palindrome number");
    }
 
    return 0;
}
