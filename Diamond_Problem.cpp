#include<iostream>
using namespace std;

class A
{
public:
    void Bark()
    {
        cout<<"\nDog is Barking now";
    }
};

class B: virtual public A
{
public:
    void Fly()
    {
        cout<<"\nThis is Flying Method";
    }
};

class C:virtual public A

{
public:
    void Walk()
    {
        cout<<"\nThis is walking Method";
    }
};

class D:public B,public C
{
public:
    void Sleep()
    {
        cout<<"\nThis is Sleeping Method";
    }
};

main()
{
    D d1;
    d1.Sleep();
    d1.Walk();
    d1.Fly();
 d1.Bark();
}
