//22.Write a program for binary addition
#include <stdio.h>
int main()
{
	int i=0,rem=0,sum[20],bin1,bin2;
	printf("Enter the first binary number: ");
	scanf("%1d",&bin1);
	printf("Enter the second binary number:");
	scanf("%d", &bin2);
	while(bin1!=0 || bin2!=0)
	{
		sum[i++] =(bin1%10 + bin2%10 +rem) %2;
		rem =(bin1%10 + bin2%10 +rem) / 2;
		bin1/=10;
		bin2/=10;
	}
	if (rem!=0)
	sum[i++] =rem;
	--i;
	printf("Sum of two binary numbers:");
	while (i>=0)
	printf("%d", sum[i--]);
	return 0;
}
