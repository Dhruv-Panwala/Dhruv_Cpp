#include<iostream>
using namespace std;

class Demo{
private:
    int x;
    int y;
public:
    Demo(){
        x=5;
        y=6;
    }
    void Set_data(int &a,int &b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<endl<<"x= "<<x<<"\t y= "<<y;
    }
};

main()
{
    Demo *D1,D2;
    int a,b;
    a=5;
    b=6;
    D1->Set_data(a,b);

    D1->display();



}
