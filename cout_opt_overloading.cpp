#include<iostream>
using namespace std;

class Complex{
private:
    int x;
    int y;
public:
    void set_data(int x, int y)
    {
        this->x=x;
        this->y=y;
    }

    void display()
    {
        cout<<x<<endl<<y;
    }

    friend ostream& operator<<(ostream&, Complex);
};

ostream& operator<<(ostream& dout, Complex c2)
{
    cout<<c2.x<<endl<<c2.y;
    return dout;
}

main()
{
    Complex c1;
    c1.set_data(50,55);
    c1.display();
    cout<<endl<<c1;
}
