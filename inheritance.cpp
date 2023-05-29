#include<iostream>
using namespace std;


//Single,Multiple,Multilevel,Hierarchical,Hybrid


class Alto
{
private:
    int x,y;

public:
    void gear()
    {
        cout<<"This is Alto Gear"<<endl;
    }
    void brake()
    {
        cout<<"This is Alto Break"<<endl;
    }
};

class Ferarri:protected Alto
{
public:
    void speed()
    {
        Alto a1;
        a1.brake();
        cout<<"This is Ferarri Speed"<<endl;
    }
};

class Mclaren:public Alto,protected Ferarri
{
public:
    void Space()
    {
        cout<<"This is Mclaren Space"<<endl;
    }
};

class maserati:protected Mclaren
{
 public:
    void heircachy()
    {
        Ferarri f3;
        f3.speed();
        cout<<"This is maserati"<<endl;
    }
}Ma;


class RR:public Ferarri
{
public:
    void umbrella()
    {
        Alto a2;
        a2.brake();
        cout<<"This is RR's Umbrella"<<endl;
    }
};

main()
{
    Ferarri f1;
    f1.speed();
    Mclaren mc1;
    //mc1.gear();
    Ma.heircachy();
}
