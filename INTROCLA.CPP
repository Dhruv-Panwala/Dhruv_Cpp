#include<iostream.h>
#include<conio.h>
//using namespace std;

class student
{
private:
	int id;
	char name[30];
	float marks;
	float roi;

public:

void set_roi()
{
	roi=6.5;
	cout<<roi;
}

void display_roi()
{
	cout<<roi;
}

void setData()
{
	cin>>id>>name>>marks;
}
void disp()
{
       cout<<id<<endl<<name<<endl<<marks;
}
};

void main()
{
	clrscr();
	student s1;
	s1.set_roi();
	s1.display_roi();

	getch();
}