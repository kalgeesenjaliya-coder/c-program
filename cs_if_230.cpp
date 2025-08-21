#include<stdio.h>
int main()
{
    /*this program prints the smallest and largest number*/
    int a,b,c;
    printf("enter three values");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
            printf("all values are equal\n");
    else
    {
    if(a >= b && a>=c)
            printf("%d is the largest number\n",a);
    else
    if(b >= a && b >= c)
            printf("%d is the largest number\n",b);
    else
            printf("%d is the largest number\n",c);


    if(a<=b && a<=c)
        printf("%d is the smallest\n",a);
    else
    if(b>=a &&b>=c)
            printf("%d is smallest\n",b);
    else
            printf("%d is smallest\n",c);
    }
}
