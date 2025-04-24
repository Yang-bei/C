#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
	int j=0;
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{   
	int a=0;
	int count=0;
	for(a=101;a<=200;a+=2)
	{
		if(is_prime(a))
		{
			printf("%d ",a);
			count++;
		}
	}
	printf("\ncount=%d\n",count);
	return 0;
}