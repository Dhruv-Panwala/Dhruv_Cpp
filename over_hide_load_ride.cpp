#include<iostream>
using namespace std;

class Demo
{
public:
    int x,y;

    void manoj(int a)
    {
        cout<<"\nHello Manoj,how are you?";
    }

    void ashok()
    {
        cout<<"\nHello Ashok,I am fine.";
    }
};

class Royal:public Demo
{
public:
    int a,b;

    void dhruv()
    {
        cout<<"\nHello Dhruv";
    }
    void dhruv(int a)
    {
        cout<<"\nDhruv Method with args "<<a;
    }
    void ashok(int p,float q)
    {
        cout<<"\nAshok Method with args"<<p<<" "<<q;
    }
    void manoj()
    {
        cout<<"Manoj method without args";
    }
};

main()
{
    Royal r;
    r.dhruv();
    r.dhruv(34);

    r.ashok(34,78.66);
    r.manoj();

}
