#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int time[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&time[i]);
	}
	qsort(time,n,sizeof(int),cmp);
	for(i=0;i<n;i++)
	{
		printf("%d",time[i]);
	}
	return 0;
}