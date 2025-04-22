#include <stdio.h>
#include <string.h>

int main()
{
	char str1[]="I love FishC.com!";
	char str2[40];
	
	strncpy(str2,str1,6);
	
	printf("str2:%s\n",str2);
	
	return 0;
}