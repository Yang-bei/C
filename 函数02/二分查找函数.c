#include <stdio.h>
int binary_search(int arr[],int k,int sz)
{
	int left=0;
	int right=sz-1;
	while (left<=right)
	{
		int mid=left+(right-left)/2;
	    if(arr[mid]<k)
	    {
		    left=mid+1;
 	    }
	    else if(arr[mid]>k)
	    {
		    right=mid-1;
	    }
 	    else
	    {
		    return mid;
	    }
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=4;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret=binary_search(arr,k,sz);
	if(ret==-1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是:%d\n",ret);
	}
	return 0;
}