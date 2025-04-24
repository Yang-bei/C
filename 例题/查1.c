#include <stdio.h>
int yi(int a)
{
	int i;
	for(i=0;i<32;i++)
	{
		int count=0;
		if((a>>1)&1==1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a=0;
	scanf("%d",&a);
	int ret=yi(a);
	printf("%d",ret)
	erturn 0;
}