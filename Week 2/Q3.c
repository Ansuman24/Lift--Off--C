#include <stdio.h>
#include <conio.h>
 int main()
{
  	char str[50];
  	int i, words=1;
 
  	printf("\n  Enter a String :  ");
  	gets(str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			words++;	
		} 
	}	
	printf("\n The Total Number of Words in this String %s  = %d", str,words);
	
  	return 0;
}
