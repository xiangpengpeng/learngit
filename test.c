#include <stdio.h>
#include <string.h>
int main()
{
	char buf[10];
	int size = sizeof("aa");
	memcpy(buf, "aa", size);
	
	printf("size == %d\n",size);
	
	printf("%s\n",buf);
	printf("learning git");
	printf("learning git");
	
	
	return 0;
}
