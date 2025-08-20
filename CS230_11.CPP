#include<stdio.h>
int main()
{
	float g;
	printf("enter grams");
	scanf("%f",&g);
	printf("%.2f grams=%.2f kgs",g,g/1000);
}