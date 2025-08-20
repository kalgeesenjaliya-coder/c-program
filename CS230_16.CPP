#include<stdio.h>
int main()
{
	float p,r,n,i;
	printf("enter principal,rate,time");
	scanf("%f %f %f",&p,&r,&n);
	i=p*r*n/100;
	printf("interest=%2f",i);
	return 0;

}