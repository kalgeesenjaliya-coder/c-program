#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1;
	clrscr();
	do{
		i++;
		printf("%d",i*2-1);
	} while(i<10);
	getch();
	return 0;
}