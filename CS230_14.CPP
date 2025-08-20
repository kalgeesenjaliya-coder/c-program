#include<stdio.h>
int main()
{
	float c;
	printf("enter celcius");
	scanf("%f",&c);
	printf("%.2f celcius=%.2 fahrenhit\n",c,(9*c/5+32));
	return 0;
}