#include<iostream>
#include<array>
using namespace std;

//template <class x, class y>
//class Demo
//{    }
main()
{
        //Demo <int, float>d1;
        array <int, 8>arr1 = {10,20,30,40,50,90,89,55};
        cout<<arr1.size()<<endl;
        //cout<<arr1.at(8); //gives error
        cout<<arr1.at(4)<<endl; //50
        cout<<arr1[6]<<endl; //Operator

      arr1.fill(33);

        for(int i=0;i<8;i++)
      {
       cout<<arr1[i]<<endl;
       }

        arr1[3]=900;
        cout<<arr1.begin()<<endl;
        cout<<arr1.end()<<endl;
        arr1[7]=785;
        cout<<arr1.back(); //785
}
