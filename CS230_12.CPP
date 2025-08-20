#include<stdio.h>
int main()
{
	float kg;
	printf("enter kilograms");
	scanf("%f",&kg);
	printf("%.2f kg=%.2f grams",kg,kg*1000);
	return 0;
}