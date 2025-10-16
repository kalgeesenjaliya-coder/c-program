#include<stdio.h>
#include<conio.h>
int main(){
     void recnatodd(int);
     recnatodd(10);
}
void recnatodd(int n)
{
          if (n==0)
                    return;
          else
          {
                    recnatodd(n-1);
                    printf("%d\n",n*2-1);
          }

}
