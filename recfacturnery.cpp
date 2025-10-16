#include<stdio.h>
#include<conio.h>
int factorial(int n)
 {
           return(n==0||n==1)?1:n*factorial(n-1);

 }
int main()
{
          int n;
          printf("enter a number;");
          scanf("%d", &n);
          printf("%d\n", factorial(n));
          return 0;
}
