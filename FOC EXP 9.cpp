//9.Factorial of a given number
#include <stdio.h>
int main ()
{
	int i=1,f=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	while (i<=n)
	{
	f=f*i;
	i=i+1;
	}
	printf("Factorial of %d is %d",n,f);
	return 0;
}
