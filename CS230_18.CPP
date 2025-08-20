#include<stdio.h>
int main()
{
	float l,b;
	printf("enter the length and breadth");
	scanf("%f%f",&l,&b);
	printf("area=%.2f\n",l*b);
	printf("perameter=%.2f\n",2*(l+b));
	return 0;
}