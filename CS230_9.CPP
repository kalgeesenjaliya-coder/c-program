#include<stdio.h>
int main()
{
	float rs;
	printf("enter rupees");
	scanf("%f",&rs);
	printf("%.2f rs=%.2f dollars",rs,rs/80);
	return 0;
}