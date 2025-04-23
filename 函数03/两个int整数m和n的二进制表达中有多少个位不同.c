#include <stdio.h>
int count_diff_bit(int m,int n)
{
	int count=0;
	int i=0;
	for (i=0;i<32;i++)
	{
		if(((m>>i)&1)!=((n>>i)&1))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n=0;
	int m=0;
	scanf("%d %d",&m,&n);
	int ret=count_diff_bit(m,n);
	printf("%d",ret);
}