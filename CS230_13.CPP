#include<stdio.h>
int main()
{
	long bytes;
	printf("enter bytes");
	scanf("%ld",bytes);
	printf("%ld bytes=%.2f KB\n",bytes,bytes/1024.0);
	printf("%ld bytes=%.2f MB\n",bytes,bytes/(1024.0*1024));
	printf("%ld bytes=%.2f GB\n",bytes,bytes/(1024.0*1024*1024));
	return 0;
}