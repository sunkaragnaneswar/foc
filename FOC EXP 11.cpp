//11.Summing up any n numbers and finding average 
#include<stdio.h>
int main ()
{
	int n,num,sum=0,i;
	float avg;
	printf("Enter a number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	printf("Enter a number:");
	scanf("%d",&n);
	sum+=num;
	}
    avg=sum/n;
	printf("Sum of %d numbers= %d",n,sum);
	printf("Average for %d numbers= %0.2f",n,avg);
	return 0;
}
