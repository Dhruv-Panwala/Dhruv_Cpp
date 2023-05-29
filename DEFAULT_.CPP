#include<iostream.h>
#include<conio.h>

int sum(int num1=0,int num2=0, int num3=0);//Default Function

void main()
{
     clrscr();
     cout<<sum(10,20,30);
     getch();
}

int sum(int num1,int num2, int num3)
{
	return num1+num2+num3;
}