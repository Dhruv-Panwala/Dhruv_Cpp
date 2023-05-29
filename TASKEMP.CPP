#include<iostream.h>
#include<conio.h>
#include<string.h>

class Employee
{
private:
	int id,salary;
	char name[50],dsgn[50],orgname[50];

public:
	inline void setData(const int id,const int salary, const char name[]
	,const char dsgn[],const char orgname[]);
	inline void display();

}e[5];
inline void Employee::setData(const int id,const int salary, const char name[30]
	,const char dsgn[],const char orgname[])
{
	this->id=id;
	this->salary=salary;
	strcpy(this->name,name);
	strcpy(this->dsgn,dsgn);
	strcpy(this->orgname,orgname);
}
inline void Employee :: display()
{
	cout<<"\n"<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<dsgn<<"\t"<<orgname<<
		"\n";
}

void main()
{
    //	Employee e[5];
	int id,salary;
	char name[50],dsgn[50],orgname[50];
	clrscr();
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Id: ";cin>>id;
		cout<<"Enter Salary: ";cin>>salary;
		cout<<"Enter name: ";cin>>name;
		cout<<"Enter Designation: ";cin>>dsgn;
		cout<<"Enter orgname: ";cin>>orgname;
		e[i].setData(id,salary,name,dsgn,orgname);
	}
	cout<<"\nid\tname\tsalary\tdsgn\torgname\n";
	for(i=0;i<5;i++)
	{
		e[i].display();
	}
	getch();
}
