#include<iostream.h>
#include<conio.h>

class bank
{
private:
	int aid1,aid2;
	float aid3;
	float roi;

public:
	void setroi(float val)
	{
		roi=val;
		cout<<roi;
	}

	bank(int x,int y)	//	Paramatrized Constructor
	{
		roi = 9.0;
		cout<<"Constructor Called"<<roi;
		aid1=x;
		aid2=y;
		cout<<endl<<aid1<<' '<<aid2;
	}
	bank(float x)
	{
		aid3=x;
		cout<<endl<<aid3;
	}
	bank()
	{
		cout<<endl<<"Default Constructor Called";
	}
	bank(bank &temp)
	{
		temp.aid1=90;
		cout<<temp.aid1<<endl;
		cout<<aid3<<endl;
		aid3=temp.aid3;
		cout<<aid3<<endl;
	}
};

void main()
{
	clrscr();
	bank b1(12,15),b2(35.44),b3,b4(b2);

	getch();
}