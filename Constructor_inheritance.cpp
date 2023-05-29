#include<iostream>
using namespace std;

class Car{
private:
    int x,y;
public:
    Car(int a, int b)
    {
            x=a;
            y=b;
    }
    void gear(){
        cout<<"This is Gear Method in Car Class\t"<<x<<y<<endl;
    }
    void brake()
    {
        cout<<"This is Break Method in Car Class"<<endl;
    }
};

class Jazz:public Car
{
private:
    int a,b;
public:
    Jazz(int p, int q):Car(p,q)
    {

    }
    void Transmission(){
        cout<<"This is  Transmission Method in Jazz Class"<<endl;
    }
};
main()
{
    Jazz j1(5,6);
    j1.gear();
}
