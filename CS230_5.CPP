 #include<stdio.h>
 int main()
 {
	int a,b;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("addition=%d\n",a+b);
	printf("subtraction=%d\n",a-b);
	printf("multiplication=%d\n",a*b);
	printf("division=%.2f\n",(float)a/b);
	return 0;
	}