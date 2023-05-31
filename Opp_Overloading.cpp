#include<iostream>
using namespace std;

class Complex{
private:
    int i,j;

public:
    void Set_data(int x,int y)
    {
        i=x;
        j=y;
    }
    void display()
    {
        cout<<"i = "<<i<<"  "<<"j= "<<j<<endl;
    }

    Complex operator+(Complex c10)
    {
        Complex ans;
        ans.i=i+c10.i;
        ans.j=j+c10.j;
        return ans;
    }
    Complex operator++()
    {
        Complex temp;
        temp.i=++i;
        temp.j=++j;
        return temp;
    }
    Complex operator++(int)
    {
        Complex temp;
        temp.i=i++;
        temp.j=j++;
        return temp;
    }
};

main()
{
    Complex c1,c2,c3,c4;
    c1.Set_data(5,15);
    c2.Set_data(25,35);
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    c4=c1++;
    c4.display();
    c4=++c2;
    c4.display();

}
