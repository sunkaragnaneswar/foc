// 12.Printing digits of an integer number
#include<stdio.h>
int main ()
{
	int count=0;
	printf("Enter a number:");
	scanf("%d", &count);
	do
	{
	count=count/10;
	++count;
	}
	while(count!=0);
	printf("number of digits= %d",count);
	return 0;
}
