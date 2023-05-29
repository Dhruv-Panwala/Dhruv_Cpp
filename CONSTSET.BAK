#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
private:
	int rno,std;
	char name[50];

public:
	void setData(const int r,const char n[],const int s)
	{
		rno=r;
		std=s;
		strcpy(name,n);

	}
	void display()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
};

void main()
{
	student s[3];
	int r,std,i;
	char n[30];
	clrscr();
	for(i=0;i<3;i++)
	{
		cout<<"Enter rno: ";
		cin>>r;
		cout<<"Enter std: ";
		cin>>std;
		cout<<"Enter name: ";
		cin>>n;

		s[i].setData(r,n,std);
	}
	for(i=0;i<3;i++)
	{
		s[i].display();
	}
	getch();
}