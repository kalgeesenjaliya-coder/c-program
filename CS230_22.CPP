#include<stdio.h>
int main()
{
	float gs, ns;
	printf("enter the gross sales");
	scanf("%f",&gs);
	ns=gs-(0.1*gs);
	printf("net sales=%.2f",ns);
	return 0;
}