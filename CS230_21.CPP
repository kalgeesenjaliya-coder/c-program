#include<stdio.h>
int main()
{
	float gs, allowance, deduction, ns;
	printf("enter gross salary\n");
	scanf("%f",&gs);
	printf("enter allowance\n");
	scanf("%f",&allowance);
	printf("enter deduction\n");
	scanf("%f",&deduction);
	ns=gs+allowance-deduction;
	printf("net salary=%.2f",ns);
	return 0;
}