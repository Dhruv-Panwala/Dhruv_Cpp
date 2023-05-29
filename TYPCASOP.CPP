#include<iostream.h>
#include<conio.h>

class demo{
public:

	int x,y;

	operator int(){
		return x;
	};
	void SetData(int a,int b)
	{
		x=a;
		y=b;
	}

	void display()
	{
		cout<<endl<<x<<endl<<y<<endl;
	}
};

void main()
{
	clrscr();

	demo d1;

	d1.SetData(9,18);
	d1.display();

	int u;
	u=d1;

	cout<<u;
	getch();
}