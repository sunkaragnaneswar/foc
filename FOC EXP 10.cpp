//10.Finding a weather given number is Armstrong or not
#include<stdio.h>
int main ()
{
	int n,num,r,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
	r=num%10;
	sum+=r*r*r;
	num/=10;
	}
	if (sum==n)
	printf("%d is an armstrong number",n);
	else
	printf("%d is not an armstrong number",n);
	return 0;
}
