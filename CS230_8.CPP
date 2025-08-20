#include<stdio.h>
int main()
{
	float d;
	printf("enter dollars");
	scanf("%f",&d);
	printf("%.2f dollars=%.2f rs.",d,d*80);
}