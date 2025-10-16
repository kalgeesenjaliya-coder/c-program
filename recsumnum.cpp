#include<stdio.h>
#include<conio.h>
int sum(int n)
{
          return(n==0)?0:(n%10)+sum(n/10);
}
int main()
{
          int n;
          printf("enter a number;");
          scanf("%d", &n);
          printf("%d\n",sum(n));
          return 0;
}
