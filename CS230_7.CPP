#include<stdio.h>
int main()
{
	int m;
	printf("enter minute");
	scanf("%d",&m);
	printf("%d minutes=%d hours %d minutes\n",m,m/60,m%60);
	return 0;
}