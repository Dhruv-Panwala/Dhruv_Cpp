#include<iostream>
using namespace std;

class Bass{
private:
    int p;
    int q;
public:
    Bass()
    {
        p=44;
        q=66;
    }

    int getp()
    {
        return p;
    }
    int getq()
    {
        return q;
    }
};

class A{
private:
    int a;
    int b;
public:
    A()
    {

    }

    A(Bass b9)
    {
        a=b9.getp();
        b=b9.getq();
    }

    void A1M()
    {
        cout<<"\ta="<<a<<"\tb="<<b;
    }

};

main()
{
    int x;
    //A a1=x; //Pre-defined to class type
    //A a2;
    //x=a2;//(x=a2.operator int())
    //a2.A1M();
    //cout<<"\nx="<<x;
    Bass b10;
    A a10;
    a10=b10;
    a10.

}
