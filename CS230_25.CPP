#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("largest=%d\n smallest=%d\n",a,b);
	}
	else
	{
		 printf("largest=%d\n smallest=%d\n",b,a);
	}
	return 0;
}
