#include <stdio.h>
int main()
{
	int a=10;
	int* pa=&a;//pa是一个指针变量，一级指针变量
	int** ppa=&pa;//ppa是一个二级指针变量
	**ppa=20;
	printf("%d\n",a);
	return 0;
}