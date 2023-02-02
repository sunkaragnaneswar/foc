//3.Generation of odd number series 1,3,5,...n
#include <stdio.h>
int main()
{
	int n,a=1;
	printf("Enter a number:");
	scanf("%d", &n);
	while(a<=n)
	{
	printf("%d ",a);
	a=a+2;
	}
	return 0;
}
