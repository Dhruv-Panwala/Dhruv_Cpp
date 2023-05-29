#include<iostream.h>
#include<conio.h>
class calc2;
class calc1{
private:
	int n1;
public:
	void setData(const int no1)
	{
	    n1=no1;
	}
	void disp()
	{
		cout<<"\nn1 : "<<n1;
	}
	friend void swap(calc1 &c1,calc2 &c2);
};
class calc2{
private:
	int n2;
public:
	void setData(const int no1)
	{
	    n2=no1;
	}
	void disp()
	{
		cout<<"\nn2 : "<<n2;
	}
	friend void swap(calc1 &c1,calc2 &c2);
};
void swap(calc1 &c1,calc2 &c2)
{
	int temp;
	temp=c1.n1;
	c1.n1=c2.n2;
	c2.n2=temp;
}

void main()
{
	calc1 c1;
	calc2 c2;
	clrscr();
	c1.setData(10);
	c2.setData(20);
	c1.disp();
	c2.disp();
	swap(c1,c2);
	cout<<"\nAfter swapping: ";
	c1.disp();
	c2.disp();
	getch();
}