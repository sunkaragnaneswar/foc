//1. Generation of number series 1,2,3,4,.....n 
#include <stdio.h>
int main ()
{
	int n,a=1;
	printf("\nEnter a number:");
	scanf("%d", &n );
	while(a<=n)
    {
    printf("%d ",a);
    a++;
    }
	return 0;
}
