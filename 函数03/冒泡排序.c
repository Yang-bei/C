#include <stdio.h>
//一个冒泡排序让一个数据来到它最终应该出现的位置上
void bubble_sort(int arr[],int sz)//冒泡排序的核心思想：两个相邻的元素进行比较
{	//趟数
	int i =0;
	for(i=0;i<sz-1;i++)
	{	
		//一趟冒泡排序
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}