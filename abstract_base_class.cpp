#include<iostream>
using namespace std;

class Person{
private:
    int x,y;
public:
    virtual void roll()=0;
};

class Student:public Person{
public:
    void roll()
    {
        cout<<"This method is inherited from person class";
    }
};

main()
{
    Student a1;
    a1.roll();
}
