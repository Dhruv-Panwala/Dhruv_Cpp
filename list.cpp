#include<iostream>
#include<list>
using namespace std;

main()
{
    // list -> Bidirectional (sequencially) (left to right, right to left)

    list <int> y1;
    list <int> y2 {10,20,30,4,13};
    list <int> y3 (4);
    list <string> y4 {"Manoj","Anil","Mukesh"};

    //cout<<y2[2];  //gives error
    //cout<<y2.at(2);   //gives error

    list <int>::iterator i1 = y2.begin();

    while(i1 != y2.end())
    {
        cout<<*i1<<" ";
        i1++;
    }

    cout<<endl<<y2.size();

    y2.push_front(300);
    y2.push_back(600);

    y2.pop_front();
    y2.pop_back();
    y2.pop_back();

    y2.reverse();
    y2.sort();

    list <int>::iterator i2 = y2.begin();

    while(i2 != y2.end())
    {
        cout<<*i2<<" ";
        i2++;
    }

    y4.remove("Anil");

    list <string>::iterator i3 = y4.begin();

    while(i3 != y4.end())
    {
        cout<<*i3<<" ";
        i3++;
    }

}
