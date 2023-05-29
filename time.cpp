#include<iostream>
using namespace std;

class Time{
public:
    int hr,mi,se;

    void setData(int a, int b, int c)
    {
        hr=a;
        mi=b;
        se=c;
    }

    void display()
    {
        cout<<hr<<":"<<mi<<":"<<se<<endl;
    }

    void generalize()
    {
        hr=hr+(mi/60);
        mi=mi%60+(se/60);
        se=se%60;

    }

    Time operator+(Time t10)
    {
        Time temp;

        temp.hr=hr+t10.hr;
        temp.mi=mi+t10.mi;
        temp.se=se+t10.se;
        return temp;
    }
};

int main()
{
    Time t1,t2,t3;
    t1.setData(5,90,91);

    t2.setData(1,89,67);
    t1.generalize();
    t2.generalize();
    t3=t1+t2;
    t3.display();
    t3.generalize();
    t3.display();
    return 0;
}
