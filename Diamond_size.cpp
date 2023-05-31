#include<iostream>
using namespace std;

class A
{
public:
   double a;
};

class B: virtual public A
{
public:
    double b;
};

class C:virtual public A

{
public:
    int c;
};

class D:public B,public C
{
public:
    int d;
};

main()
{
    A a1;
    B b1;
    C c1;
    D d1;
    cout<<sizeof(a1)<<endl<<sizeof(b1)<<endl<<sizeof(c1)<<endl<<sizeof(d1)<<endl;
}
