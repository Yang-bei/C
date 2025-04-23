#include <stdio.h>
int my_strlen(char*str)
{
	char* start=str;
	while(*str!='\0')
	{
		str++;
	}
	return(str-start);
}
int main()
{
	int len=my_strlen("abcdef");
	printf("%d\n",len);
	return 0;
}