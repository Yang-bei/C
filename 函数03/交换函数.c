#include <stdio.h>
void Swap(int* px,int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}
int add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	printf("交换前:a=%d,b=%d\n",a,b);
	Swap(&a,&b);
	printf("交换后:a=%d,b=%d\n",a,b);
	int c=add(a,b);
	printf("%d\n",c);
	return 0;
}