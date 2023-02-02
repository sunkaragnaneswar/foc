//4.Generation of Fibonacci series 0,1,2,3,....,n
#include <stdio.h>
int main ()
{
	int F0=0,F1=1,Fib,i,n;
	printf("Enter a number:");
	scanf("%d", &n);
	printf("%d %d ",F0,F1);
	for(i=2;i<n;++i)
	{
	Fib=F0+F1;
	F0=F1;
	F1=Fib;
	printf("%d ",Fib);
	}
	return 0;
}
