#include<stdio.h>
#include<conio.h>
int gcd(int a, int b)
{
          return(b==0)?a: gcd(a, a%b);

}
int main()
{
          int a,b;
          printf("enter two number;");
          scanf("%d%d", &a,&b);
          printf("%d\n",gcd(a,b));
          return 0;
}
