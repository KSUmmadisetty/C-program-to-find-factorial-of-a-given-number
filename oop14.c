#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n);
int main(int argc, char *argv[]) {
	int n,fact;
	printf("enter the number:");
	scanf("%d",&n);
	fact = factorial(n);
	printf("factorial of %d is %d", n, fact );
	return 0;
}
int factorial(n)
{
	if(n==0)
    {
    	return 1;
	}
    else if(n>=1)
    {
    	return(n*factorial(n-1));
	}
}
