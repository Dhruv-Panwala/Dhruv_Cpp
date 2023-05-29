#include<iostream.h>
#include<conio.h>
class student{

private:
	int rno;
	char name[20];
	int std;

public:
	inline void scan();
	inline void display();
};

inline void student:: scan()
{
	cout<<"Enter rno: ";
	cin>>rno;
	cout<<"Enter std: ";
	cin>>std;
	cout<<"Enter name: ";
	cin>>name;
}

inline void student:: display()
{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
}

void main()
{
	student s[i];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		s[i].scan();
	}
	for(i=0;i<5;i++)
	{
		s[i].display();
	}
	getch();
}
