#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print it
 * and if it is positive, negative, or zero
 * Return: 0
 */


int main(void)
{
           int n;
           n=rand();
         if (n > 0)
           {
	printf("%d is %s\n", n, "positive");
           }
        if( n= 0)
	{
        printf("%d is %s\n", n, "zero");
	}
	if(n < 0)
         {   
        printf("%d is %s\n", n, "negative");
         }
         return(0);
}
