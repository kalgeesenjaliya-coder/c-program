#include<stdio.h>
int main()
{
	float d, pounds;
	printf("enter dollars");
	scanf("%f",&d);
	pounds=(d/80)*70;

	printf("%.2f dollars=%.2f pounds",d,pounds);
	return 0;
}