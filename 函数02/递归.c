#include <stdio.h>
void print(unsigned int n)
{
	if(n>9)
	{
		print(n/10);//n/10得到的值进入下一个print函数
	}
	printf("%d",n%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);//接受一个整型值（无符号），按照顺序打印它的每一位。
	return 0;
}