#include<stdio.h>
int main()
{
	float f;
	printf("enter fahrenhiet");
	scanf("%f",&f);
	printf("%.2f fahrenhiet=%.2f celcius\n",f,(f-32)*5/9);
	return 0;
}