#include<iostream.h>
#include<conio.h>

class demo
{
public:
	int x,y,z;
	const int a;

	demo():z(100),a(350)
	{
		x=55;
		y=99;
	}
	void setdata(int p,int q)
	{
		x=p;y=q;
	}
	void disp()
	{
		cout<<x<<endl<<y<<endl<<z<<endl<<a;
	}
};

void main()
{
	clrscr();
	demo d;
	d.disp();
	getch();
}