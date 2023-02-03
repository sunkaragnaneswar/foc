//20.Program to convert octal to decimal 
#include <stdio.h>
#include <math.h>
int main(){
	int octal,dec=0,i=0;
	printf("Enter the number");
	scanf("%d",&octal);
	while(octal!=0)
	{
	dec+=(octal%10)*pow(8,i++);
	octal/=10;
	}
	printf("The decimal number is: %d",dec);
	return 0;
}
