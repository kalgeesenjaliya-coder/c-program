#include<stdio.h>
int main()
{
	int m1,m2,m3,total;
	float avg;
	printf("enter the marks of three subjects;");
	scanf("%d%d%d",&m1,&m2,&m3);
	if(m1<35||m2<35||m3<35)
	{
		printf("result:fail");
		return 0;
	}
	total=m1+m2+m3;
	avg=total/3.0;
	printf("total=%d\n",total);
	printf("average=%.2f\n",avg);
	if(avg>=70){
		printf("grade=distinction\n");
	} else if(avg>=60){
		printf("grade=first class\n");
	}else if(avg>=50){
		printf("grade=second class\n");
	}else if(avg>=35){
		printf("result:fail\n");
	}
	return 0;
}