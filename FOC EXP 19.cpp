//19.write a program to convert decimal to octal number
#include <stdio.h>
#include <math.h>
int main()
{
	int dec,octal=0,i=1;
	printf("enter the number");
	scanf("%d",&dec);
	while(dec!=0)
	{
	oN121ctal+=(dec%8)*i;
	dec/=8;
	i*=10;
	}printf("the octal number of %d is %d ",dec,octal);
	return 0;
}
