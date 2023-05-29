#include<iostream.h>
#include<conio.h>

class Demo;

class Complex{
private:
	int x;
public:
	void set_data(int a)
	{
		x=a;
	}
	void display()
	{
		cout<<x<<endl<<endl;
	}

	friend void sum(Complex c,Demo d);
};

class Demo{
private:
	int y;
public:
	void set_data(int b)
	{
		y=b;
	}
	void display()
	{
		cout<<y<<endl;
	}

	friend void sum(Complex c,Demo d);
};
void sum(Complex c,Demo d)
{
	cout<<"This is Friend function of Complex Class"<<c.x+d.y;
}

void main()
{
	clrscr();
	Complex c1;
	c1.set_data(5);
	Demo d1;
	d1.set_data(8);
	sum(c1,d1);
	getch();
}