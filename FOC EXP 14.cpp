//14.Reversing the digits of an integer number
#include<stdio.h>
int main()
{
	int n,reverse=0,r;
	printf("enter an integer:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		reverse=reverse*10+r;
		n/=10;
	}
	printf("reversed number=%d",reverse);
	return 0;
	
}
