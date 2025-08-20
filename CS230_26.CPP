#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two values;");
	scanf("%d%d%d",a,b,c);
	int largest=a,smallest=a;
	if(b>largest) largest=b;
	if(c>largest) largest=c;
	if(c<smallest) smallest=b;
	if(c<smallest) smallest=c;
	printf("largest=%d\nsmallest=%d\n",largest,smallest);
	return 0;
}