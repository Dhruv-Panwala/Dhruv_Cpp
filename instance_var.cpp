#include<iostream>
using namespace std;

class Bank{
private:
    int balance;

public:
    static float ROI;
    Bank(){
        balance=0;
    }

    void add_balance(int deposit_amt)
    {
        if(deposit_amt>0)
        {
            balance+=deposit_amt;
            cout<<"Your Deposit is added";
        }
    }
    void display()
    {
        cout<<balance<<endl<<ROI;
    }
    static void display_ROI();
    void change_ROI(float);
};

float Bank::ROI=7.8f;

void Bank::display_ROI()
{
    cout<<endl<<ROI<<endl;
}
void Bank::change_ROI(float m)
{
    ROI=m;
}

main()
{
    Bank dhruv,Krutarth;
    dhruv.add_balance(510);
    dhruv.display();
    Krutarth.display();
    Bank::display_ROI();
    dhruv.change_ROI(9.1f);
    Krutarth.display();

}
