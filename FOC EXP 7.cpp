//7.Summing up cubes of n numbers
#include <stdio.h>
int main ()
{
    int n,a=1,sum=0;
    printf("Enter a number" );
    scanf("%d", &n);
    while(a<=n)
    {
        sum=sum+(a*a*a);
        a=a+1;
    }
    printf("sum=%d",sum);
    return 0;
}
